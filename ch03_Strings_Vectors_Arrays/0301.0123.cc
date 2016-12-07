#include <iostream>
#include "../include/Sales_item.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main()
{
    int cnt = 1;
    Sales_item total, trans;

    // 统计Sales_item对象
    if (cin >> total)
    {
        while (cin >> trans)
        {
            if (trans.isbn() == total.isbn())
                ++cnt;
            else
            {
                cout << total << " occurs "
                     << cnt << " times " << endl;
                total = trans;
                cnt = 1;
            }
        }
        cout << total << " occurs "
             << cnt << " times " << endl;
    }
    else
    {
        cerr << "No data?!"
             << endl;
        return -1;
    }

    return 0;
}