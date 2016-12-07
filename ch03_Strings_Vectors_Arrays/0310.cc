#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string line;

    getline(cin, line);

    // 去除string类型元素中的标点符号
    for (char &c : line)
    {
        if (!ispunct(c))
            cout << c;
    }
    cout << endl;

    return 0;
}