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
    vector<string> text;

    while (getline(cin,str))
        text.push_back(str);

    // 把text容器的第一段打印成大写
    for (auto it = text.begin();
         it != text.end() && !it->empty(); ++it)
    {
        for (auto &ix : *it)
            ix = toupper(ix);
        cout << *it << endl;
    }

    return 0;
}