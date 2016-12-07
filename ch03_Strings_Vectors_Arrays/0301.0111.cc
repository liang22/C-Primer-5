#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int v1 = 0, v2 = 0, s_val = 0, b_val = 0;

    cout << "Enter two numbers:" << endl;
    cin >> v1 >> v2;
    cout << "The numbers between "
         << v1 << " and " << v2 << ":" << endl;

    if (v1 > v2)
    {
        s_val = ++v2;
        b_val = v1;
    }
    else if (v1 < v2)
    {
        s_val = ++v1;
        b_val = v2;
    }
    else
    {
        cout << "Error: Enter the same numbers!" << endl;
    }

    // 打印两个整数之间的所有整数
    while (s_val < b_val)
    {
        cout << s_val << endl;
        ++s_val;
    }

    return 0;
}