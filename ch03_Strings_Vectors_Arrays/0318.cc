#include <vector>
using std::vector;

int main()
{
    vector<int> ivec;

    ivec[0] = 88;                                            // 错误，不能直接使用下标
    ivec.push_back(88);                                      // 正确

    return 0;
}