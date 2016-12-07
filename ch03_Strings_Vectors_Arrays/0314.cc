#include <iostream>
#include <vector>

using std::cin;
using std::vector;

int main()
{
    int i;
    vector<int> ivec;

    // 循环向vector<int>中输入元素
    while (cin >> i)
        ivec.push_back(i);

    return 0;
}