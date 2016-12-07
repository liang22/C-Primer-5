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
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    // 迭代器方式打印以上容器
    cout << "v1   size:" << v1.size() << "\tmember:";
    for (auto ix = v1.begin(); ix != v1.end(); ++ix)
        cout << "\'" << *ix << "\',";
    if (!v1.empty())
        cout << "\b ";
    cout << endl;

    cout << "v2   size:" << v2.size() << "\tmember:";
    for (auto ix = v2.begin(); ix != v2.end(); ++ix)
        cout << "\'" << *ix << "\',";
    if(!v2.empty())
        cout << "\b ";
    cout << endl;

    cout << "v3   size:" << v3.size() << "\tmember:";
    for (auto ix = v3.begin(); ix != v3.end(); ++ix)
        cout << "\'" << *ix << "\',";
    if(!v3.empty())
        cout << "\b ";
    cout << endl;

    cout << "v4   size:" << v4.size() << "\tmember:";
    for (auto ix = v4.begin(); ix != v4.end(); ++ix)
        cout << "\'" << *ix << "\',";
    if(!v4.empty())
        cout << "\b ";
    cout << endl;

    cout << "v5   size:" << v5.size() << "\tmember:";
    for (auto ix = v5.begin(); ix != v5.end(); ++ix)
        cout << "\'" << *ix << "\',";
    if(!v5.empty())
        cout << "\b ";
    cout << endl;

    cout << "v6   size:" << v6.size() << "\tmember:";
    for (auto ix = v6.begin(); ix != v6.end(); ++ix)
        cout << "\'" << *ix << "\',";
    if(!v6.empty())
        cout << "\b ";
    cout << endl;

    cout << "v7   size:" << v7.size() << "\tmember:";
    for (auto ix = v7.begin(); ix != v7.end(); ++ix)
        cout << "\'" << *ix << "\',";
    if(!v7.empty())
        cout << "\b ";
    cout << endl;

    return 0;
}