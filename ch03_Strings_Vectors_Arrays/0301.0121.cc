#include <iostream>
#include "../include/Sales_item.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main()
{
    Sales_item item1, item2;

    // 两个Sales_item对象相加
    cin >> item1 >> item2;
    if (item1.isbn() != item2.isbn())
    {
        cerr << "Must be the same ISBN!"
             << endl;
        return -1;
    }

    cout << item1 + item2 << endl;

    return 0;
}