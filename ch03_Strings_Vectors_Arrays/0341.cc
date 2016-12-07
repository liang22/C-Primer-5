#include <vector>
#include <iterator>

using std::vector;
using std::begin;
using std::end;

int main()
{
    int ia[3] = {1, 2, 3};

    // 数组拷贝给vector对象
    vector<int> ivec(begin(ia), end(ia));

    return 0;
}