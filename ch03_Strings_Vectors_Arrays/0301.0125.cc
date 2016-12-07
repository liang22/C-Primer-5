#include <iostream>
#include "../include/Sales_item.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main()
{
    Sales_item total;

    if (cin >> total)
    {
        Sales_item trans;

        // 整合多个Sales_item对象
        while (cin >> trans)
        {
            if (total.isbn() == trans.isbn())
                total += trans;
            else
            {
                cout << total << endl;
                total = trans;
            }
        }
        cout << total << endl;
    }
    else
    {
        cerr << "No data?!"
             << endl;
        return -1;
    }

    return 0;
}