#include <iterator>

using std::begin;
using std::end;

int main()
{
    int ia[] = {1, 2, 3};

    int *ia_beg = begin(ia);
    int *ia_end = end(ia);

    // 数组元素置0
    for (; ia_beg != ia_end; ++ia_beg)
        *ia_beg = 0;

    return 0;
}