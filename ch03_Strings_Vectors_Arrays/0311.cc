#include <string>
using std::string;

int main()
{
    const string s = "Keep out!";
    for (auto &c : s)                                        // 不修改则语句合法，修改则不合法
    {
        /* ... */;
    }

    return 0;
}