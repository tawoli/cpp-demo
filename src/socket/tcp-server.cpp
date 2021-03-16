#include <sys/socket.h>
#include <cstdlib>
#include <netinet/in.h>
#include <zconf.h>

// argc : argument count缩写 , 表示传入参数个数
// argv : argument vector缩写 , 表示传入参数序列 , 并且第一个参数 argc[0] 一定是程序的名称 , 且包含了程序所在的完整路径
// return vs exit() : return 会析构局部对象 , exit() 则不会析构 , 有时会产生影响 . exit() 会清理静态对象 , abort() 则不会
// EXIT_FAILURE EXIT_SUCCESS : C 、 C++ 中推荐的使用的return 、 exit()方式
int main(int argc, char *argv[]) {
    // socket(domain, type, protocol) : 创建套接字
    // domain : 创建套接字指定协议集（或者叫地址族 Address Family）, 例如 : AF_INET（IPv4）、AF_INET6（IPv6）、AF_UNIX（本地套接字）
    // type : socket类型 , 包括 : SOCK_STREAM（TCP）、SOCK_DGRAM（UDP）、SOCK_SEQPACKET（可靠的连续数据包服务）、SOCK_RAW（原始套接字）
    // protocol : 实际使用的传输协议 , 为 0 表示根据domain 、 type选择使用缺省协议
    // 文件描述符 : 对应的是文件描述符表中的数组下标
    // 如果发生错误 ， 则返回 -1 ; 否则 . 返回一个新分配的文件描述符
    int socketFileDescriptor = socket(AF_INET, SOCK_STREAM, 0);
    if (socketFileDescriptor == -1) {
        return EXIT_FAILURE;
    }

    // setsockopt(int socketFileDescriptor, int level, int option_name, const void *option_value, socklen_t option_len) : 设置socket描述符选项
    // socketFileDescriptor : socket描述符
    // level : SOL_SOCKET 代表 套接字层 , 用于协议无关的选项
    // option_name : 指定设置的单个选项 . SO_DEBUG | SO_BROADCAST | SO_REUSEADDR : 即使此端口正忙（处于TIME_WAIT状态） , 如果繁忙 , 但是处于另一种状态 , 仍然会得到一个已经在使用中的地址错误 | SO_KEEPALIVE | SO_LINGER | SO_OOBINLINE | SO_SNDBUF | SO_RCVBUF | SO_DONTROUTE | SO_RCVLOWAT | SO_RCVTIMEO | SO_SNDLOWAT | SO_SNDTIMEO
    // option_value : 0 / 1
    // optlen : 选项的长度
    int optlen = 1;
    int setSuccess = setsockopt(socketFileDescriptor, SOL_SOCKET, SO_REUSEADDR, &optlen, sizeof(optlen));
    if (setSuccess == -1) {
        return EXIT_FAILURE;
    }

    // sockaddr : 任何类型的套接字操作的通用描述符
    // sockaddr_in : 特定于基于IP通信的结构
    // bind() : 假装采用struct sockaddr * , 实际上 , 会根据第一个参数假定适当的结构 , 将套接字绑定到addr中指定的地址和端口号
    struct sockaddr_in internetAddress{};
    internetAddress.sin_family = AF_INET;
    internetAddress.sin_addr.s_addr = INADDR_ANY;
    internetAddress.sin_port = htons(8080);
    int bindSuccess = bind(socketFileDescriptor, (struct sockaddr *) &internetAddress, sizeof(internetAddress));
    if (bindSuccess == -1) {
        return EXIT_FAILURE;
    }

    // listen : TCP/IP堆栈开始在套接字绑定的端口上接受传入的TCP连接
    // backlog : 在应用程序在该套接字调用accept之前 , 套接字的端口上可以接受多少TCP连接 , 只是将一个已被接受的连接之一从积压队列中移除（或者等待一个到来）
    int listenSuccess = listen(socketFileDescriptor, 3);
    if (listenSuccess == -1) {
        return EXIT_FAILURE;
    }

    // accept : 从监听socket的等待连接队列提取第一个连接 , 创建一个新的连接套接字 , 返回该套接字的新文件描述符 , 新创建的套接字不处于侦听状态
    int acceptFileDescriptor = accept(socketFileDescriptor, (struct sockaddr *) &internetAddress, (socklen_t *) &internetAddress);
    if (acceptFileDescriptor == -1) {
        return EXIT_FAILURE;
    }

    // read : 从文件描述符读入缓冲区 , 从buf开始计数count字节
    char buffer[1024] = {0};
    ssize_t recvReturn = recv(acceptFileDescriptor, buffer, 1024, 0);
    if (recvReturn == -1) {
        return EXIT_FAILURE;
    }
    send(acceptFileDescriptor, buffer, 1024, 0);
}