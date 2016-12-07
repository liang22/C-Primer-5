#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str1, str2, str3;

    cin >> str1
        >> str2;

    // 比较string类型的大小
    if (str1 > str2)
        str3 = str1;
    else
        str3 = str2;
    cout << "larger:\t"
         << str3 << endl;

    // 比较string类型的长度
    if (str1.size() > str2.size())
        str3 = str1;
    else
        str3 = str2;
    cout << "longer:\t"
         << str3 << endl;

    return 0;
}