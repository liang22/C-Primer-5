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
    for (auto i = 0; i < ivec.size(); i++)
    {
        if (i != 0)
            cout << tmp << "+"
                 << ivec[i] << "="
                 << ivec[i] + tmp << ",";
        tmp = ivec[i];
    }
    cout << "\b " << endl;

    // 输出vector<int>中首尾元素的和
    auto j = ivec.size() - 1;
    for (auto i = 0; i < ivec.size(); i++)
    {
        cout << ivec[i] << "+"
             << ivec[j] << "="
             << ivec[i] + ivec[j] << ",";
        j--;
    }
    cout << "\b " << endl;

    return 0;
}