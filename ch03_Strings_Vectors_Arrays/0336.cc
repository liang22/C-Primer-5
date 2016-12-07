#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    int tmp = 0;
    int ia1[3] = {1, 2, 3};
    int ia2[3] = {1, 2, 6};
    vector<int> ivec1{1, 2, 3};
    vector<int> ivec2{1, 2, 6};


    // 比较数组是否相等
    for (int *p1 = ia1, *p2 = ia2;
         p1 != ia1 + 3, p2 != ia2 + 3; ++p1, ++p2)
    {
        if (*p1 != *p2)
        {
            tmp = 1;
            cout << "The two arrays are not equal."
                 << endl;
        }
    }

    if (tmp == 0)
        cout << "The two arrays are equal."
             << endl;

    // 比较vector对象是否相等
    if (ivec1 == ivec2)
        cout << "The two vectors are equal."
                 << endl;
    else
        cout << "The two vectors are not equal."
                 << endl;

    return 0;
}