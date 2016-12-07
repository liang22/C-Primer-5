#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // 使用迭代器使vector<int>的元素值变为之前2倍
    for (auto it = ivec.begin();
         it != ivec.end(); ++it)
        *it = *it * 2;

    for (auto ix : ivec)
        cout << ix << " ";
    cout << endl;

    return 0;
}