#include <vector>
#include <cstddef>

using std::vector;

int main()
{
    // 拷贝数组至另一个数组
    int ia[10];
    for (size_t i = 0; i < 10; ++i)
        ia[i] = i;

    int new_ia[10];
    for (size_t i = 0; i < 10; ++i)
        new_ia[i] = ia[i];

    // 拷贝vector至另一个vector
    vector<int> ivec(10);
    for (auto iter = ivec.begin();
         iter != ivec.end(); ++iter)
        *iter = iter - ivec.begin();

    vector<int> new_ivec(ivec);

    return 0;
}