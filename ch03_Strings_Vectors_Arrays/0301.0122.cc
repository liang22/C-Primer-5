#include <iostream>
#include "../include/Sales_item.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main()
{
    Sales_item item, total;

    // 多个Sales_item对象相加
    if (cin >> total)
    {
        while (cin >> item)
        {
            if (total.isbn() != item.isbn())
            {
                cerr << "Must be the same ISBN!"
                     << endl;
                return -1;
            }
            else
                total += item;
        }
        cout << total << endl;
    }
    else
    {
        cerr << "No data!"
             << endl;
        return -1;
    }

    return 0;
}