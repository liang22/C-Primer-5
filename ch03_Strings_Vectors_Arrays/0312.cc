#include <string>
#include <vector>

using std::string;
using std::vector;

int main()
{
    vector<vector<int>> ivec;                                // 正确，该向量的元素是vector对象
    vector<string> svec = ivec;                              // 错误，不同类型的实例
    vector<string> svec(10, "null");                         // 正确，保存strng类型的对象，10个"null"

    return 0;
}