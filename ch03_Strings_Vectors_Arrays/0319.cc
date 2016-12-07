#include <vector>
using std::vector;

int main()
{
    // 以下初始化方法中第一种最好，明确给出了成员和数目
    vector<int> ivec1(10, 88);
    vector<int> ivec2{88, 88, 88, 88, 88, 88, 88, 88, 88, 88};

    vector<int> ivec3;
    for (int i = 0; i < 10; i++)
    {
        ivec3.push_back(88);
    }

    return 0;
}