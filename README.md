# cpp-demo

## 项目结构

* build：存储编译结果，不被源代码管理
* src：源代码位置，没有子模块则必须存在
* include：公共头文件，对于不区分public/private头文件项目可以不存在，对于有子模块项目可以省略
* tests：测试目录
* examples：示例目录
* external：项目使用但不编辑的package/projects
* extras：包含额外/可选子模块
* data：非源代码的目录，例如：图形，标记
* tools：包含开发工具，例如：构建脚本
* docs：文档目录
* libs：子模块目录