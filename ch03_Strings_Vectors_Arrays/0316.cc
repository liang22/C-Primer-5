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
    vector<int> v1;                                          // 空
    vector<int> v2(10);                                      // 10个0
    vector<int> v3(10, 42);                                  // 10个42
    vector<int> v4{10};                                      // 1个10
    vector<int> v5{10, 42};                                  // 1个10,1个42
    vector<string> v6{10};                                   // 10个""
    vector<string> v7{10, "hi"};                             // 10个"hi"

    // 范围for方式打印以上容器
    cout << "v1   size:" << v1.size() << "\tmember:";
    for (auto ix : v1)
        cout << "\'" << ix << "\',";
    if (!v1.empty())
        cout << "\b ";
    cout << endl;

    cout << "v2   size:" << v2.size() << "\tmember:";
    for (auto ix : v2)
        cout << "\'" << ix << "\',";
    if (!v2.empty())
        cout << "\b ";
    cout << endl;

    cout << "v3   size:" << v3.size() << "\tmember:";
    for (auto ix : v3)
        cout << "\'" << ix << "\',";
    if (!v3.empty())
        cout << "\b ";
    cout << endl;

    cout << "v4   size:" << v4.size() << "\tmember:";
    for (auto ix : v4)
        cout << "\'" << ix << "\',";
    if (!v4.empty())
        cout << "\b ";
    cout << endl;

    cout << "v5   size:" << v5.size() << "\tmember:";
    for (auto ix : v5)
        cout << "\'" << ix << "\',";
    if (!v5.empty())
        cout << "\b ";
    cout << endl;

    cout << "v6   size:" << v6.size() << "\tmember:";
    for (auto ix : v6)
        cout << "\"" << ix << "\",";
    if (!v6.empty())
        cout << "\b ";
    cout << endl;

    cout << "v7   size:" << v7.size() << "\tmember:";
    for (auto ix : v7)
        cout << "\"" << ix << "\",";
    if (!v7.empty())
        cout << "\b ";
    cout << endl;

    return 0;
}