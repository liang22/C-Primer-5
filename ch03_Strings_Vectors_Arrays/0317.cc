#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string str;
    vector<string> svec;

    while (cin >> str)
        svec.push_back(str);

    // 将vector<string>中的元素替换为大写
    for (auto &ix : svec)
    {
        for (auto &ch :ix)
        {
            ch = toupper(ch);
        }
    }

    for (auto ix : svec)
        cout << ix << endl;

    return 0;
}