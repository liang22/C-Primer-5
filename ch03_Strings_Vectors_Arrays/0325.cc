#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;

    // 使用迭代器改变vector<unsigned>元素值
    while (cin >> grade)
    {
        if (grade <= 100)
        {
            auto ths = scores.begin() + grade/10;
            ++*ths;
        }
    }

    for (auto ux : scores)
        cout << ux << " ";
    cout << endl;

    return 0;
}