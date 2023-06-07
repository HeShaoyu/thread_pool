#include <iostream>

int main()
{
    // 1. 创建bool数据类型
    bool flag = true;
    std::cout << flag << std::endl; // 1
    flag = false;
    std::cout << flag << std::endl; // 0
    // 2. 查看bool类型所占内存空间大小
    std::cout << "bool类型占用" << sizeof(bool) << "字节" << std::endl; // 1
    return 0;
}