#include <iostream>
#include <string>

using std::cin;
using std::string;

int main()
{
    string line;

    getline(cin, line);

    // 替换string类型的元素
    for (char &c : line)                                     // 可用auto &c代替，无区别
    {
        if (isalpha(c))
            c = 'X';
    }

    return 0;
}