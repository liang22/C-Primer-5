#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int in = 0;
    int tmp = 0;
    vector<int> ivec;

    while (cin >> in)
        ivec.push_back(in);

    if (ivec.empty())
    {
        cout << "error: no data."
             << endl;
        return -1;
    }

    // 输出vector<int>中相邻元素的和
    for (auto it = ivec.begin(); it != ivec.end(); ++it)
    {
        if (it != ivec.begin())
            cout << tmp << "+"
                 << *it << "="
                 << *it + tmp << ",";
        tmp = *it;
    }
    cout << "\b " << endl;

    // 输出vector<int>中首尾元素的和
    auto j = ivec.size() - 1;
    for (auto beg = ivec.begin(), end = ivec.end() - 1;
         beg != ivec.end(); ++beg, --end)
    {
        cout << *beg << "+"
             << *end << "="
             << *beg + *end << ",";
        j--;
    }
    cout << "\b " << endl;

    return 0;
}