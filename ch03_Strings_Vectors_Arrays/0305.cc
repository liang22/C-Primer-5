#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main()
{
    string word, oput1, oput2;

    // 连接两个string类型
    if (cin >> word)
    {
        oput1 = word;
        oput2 = word;

        while (cin >> word)
        {
            oput1 += word;
            oput2 += " ";
            oput2 += word;
        }
    }
    else
    {
        cerr << "No data!"
             << endl;
        return -1;
    }

    cout << oput1 << "\n"
         << oput2 << endl;

    return 0;
}