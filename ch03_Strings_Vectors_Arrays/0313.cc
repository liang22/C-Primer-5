#include <string>
#include <vector>

using std::string;
using std::vector;

int main()
{
    vector<int> v1;                                          // 空
    vector<int> v2(10);                                      // 10个0
    vector<int> v3(10, 88);                                  // 10个88
    vector<int> v4{10};                                      // 1个10
    vector<int> v5{10, 88};                                  // 1个10,1个88
    vector<string> v6{10};                                   // 10个""
    vector<string> v7{10, "hi"};                             // 10个"hi"

    return 0;
}