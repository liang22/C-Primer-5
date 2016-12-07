#include <iostream>
using std::cin;

int main()
{
    unsigned scores[11] = {};                                // 不初始化scores直接进行后续运算，会产生未知后果
    unsigned grade;

    while (cin >> grade)
    {
        if (grade <= 100)
            ++scores[grade/10];
    }

    return 0;
}