#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int ia[3][4];

    for (size_t i = 0; i < 3; ++i)
    {
        for (size_t j = 0; j < 4; ++j)
            ia[i][j] = i * 4 + j;
    }

    using int_array = int[4];                                // 或者 typedef int int_array;

    // 范围for模式打印多维数组
    for (const int_array &i : ia)
    {
        for (int j : i)
            cout << j << " ";
    }
    cout << endl;

    // 普通for模式利用下标打印多维数组
    for (size_t i = 0; i < 3; ++i)
    {
        for (size_t j = 0; j < 4; ++j)
            cout << ia[i][j] << " ";
    }
    cout << endl;

    // 普通for模式利用指针打印多维数组
    for (const int_array *p = ia; p != ia + 3; ++p)
    {
        for (auto *q = *p; q != *p + 4; ++q)
            cout << *q << " ";
    }
    cout << endl;

    return 0;
}