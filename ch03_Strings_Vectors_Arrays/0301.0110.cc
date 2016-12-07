#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int num = 10;

    // 打印10以内的正整数
    --num;
    while (num > 0)
    {
        cout << num << endl;
        --num;
    }

    return 0;
}