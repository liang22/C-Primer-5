#include <cstddef>

int main()
{
    constexpr size_t array_size = 10;
    int ia[array_size];

    // 下标越界：for (size_t ix = 1; ix <= array_size; ++ix)
    for (size_t ix = 0; ix < array_size; ++ix)
        ia[ix] = ix;

    return 0;
}