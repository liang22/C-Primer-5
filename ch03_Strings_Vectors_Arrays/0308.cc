#include <iostream>
#include <string>

using std::cin;
using std::string;

int main()
{
    int j = 0;
    string line,str1,str2;

    getline(cin, line);
    str1 = line;
    str2 = line;

    // 使用传统for循环替换string类型的元素
    for (int i = 0; i < str1.size(); i++)
    {
        if (isalpha(str1[i]))
            str1[i] = 'X';
    }

    // 使用while循环替换string类型的元素
    while (j < str2.size())
    {
        if (isalpha(str2[j]))
            str2[j] = 'X';

        j++;
    }

    return 0;
}