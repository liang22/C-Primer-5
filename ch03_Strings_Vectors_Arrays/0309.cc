#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string s;
    cout << s[0] << endl;                                    // 不合法，s没有初始化

    return 0;
}