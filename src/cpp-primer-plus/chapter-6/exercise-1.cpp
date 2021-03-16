
#include <iostream>

int main() {
    using namespace std;

    cout << "输入字符（@符号中止）：";
    char character;
    // cin >> : 根据空白（空格、制表符、换行符）确定字符串结束位置 , 无法处理中间有空白的字符串
    // cin.getline() : 根据换行符确定输入 , 换行符会从输入缓冲区去除
    // cin.get() : 根据换行符确定输入 , 会保留换行符在缓冲区
    cin.get(character);

    while (character != '@') {
        if (isupper(character)) {
            character = char(tolower(character));
        } else if (islower(character)) {
            character = char(toupper(character));
        }
        if (!isdigit(character)) {
            cout << character;
        }
        cin.get(character);
    }
    cout << endl;
    return 0;
}