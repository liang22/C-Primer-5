#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
    int ia[3][4];

    for (size_t i = 0; i < 3; ++i)
    {
        for (size_t j = 0; j < 4; ++j)
            ia[i][j] = i * 4 + j;
    }

    // 范围for模式打印多维数组
    for (const auto &i : ia)
    {
        for (auto j : i)
            cout << j << " ";
    }
    cout << endl;

    // 普通for模式利用下标打印多维数组
    for (auto i = 0; i < 3; ++i)
    {
        for (auto j = 0; j < 4; ++j)
            cout << ia[i][j] << " ";
    }
    cout << endl;

    // 普通for模式利用指针打印多维数组
    for (auto p = ia; p != ia + 3; ++p)
    {
        for (auto q = *p; q != *p + 4; ++q)
            cout << *q << " ";
    }
    cout << endl;

    // 普通for模式利用指针(begin, end)打印多维数组
    for (auto p = begin(ia); p != end(ia); ++p)
    {
        for (auto *q = begin(*p); q != end(*p); ++q)
            cout << *q << " ";
    }
    cout << endl;

    return 0;
}