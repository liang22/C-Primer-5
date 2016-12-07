#include <vector>
#include <iterator>
#include <iostream>

using std::vector;
using std::begin;
using std::end;

int main()
{
    int ia[3];
    vector<int> ivec{1, 2, 3};

    // vector对象拷贝给数组
    for (int *p = begin(ia), n = 0;
         p != end(ia); ++p, ++n)
    {
        *p = ivec[n];
    }

    return 0;
}