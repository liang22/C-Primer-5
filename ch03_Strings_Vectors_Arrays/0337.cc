#include <iostream>

using std::cout;
using std::endl;

// 程序将指针指向一个C风格字符串并打印该指针指向的对象
int main()
{
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};             // 遗漏空字符，将产生未知后果
    const char *cp = ca;

    while (*cp)
    {
        cout << *cp << endl;
        ++cp;
    }

    return 0;
}