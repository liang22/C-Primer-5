#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1{"asdad"};
    string s2{"asdad"};
    char s3[] = "asdas";
    char s4[] = "ddv";

    // 比较两个c++的string是否相等
    if (s1 == s2)
        cout << "The two strings(C++) are equal."
             << endl;
    else
        cout << "The two strings(C++) are not equal."
             << endl;

    // 比较两个c风格字符串是否相等
    if (strcmp(s3, s4) == 0)
        cout << "The two strings(C) are equal."
             << endl;
    else
        cout << "The two strings(C) are not equal."
             << endl;

    return 0;
}