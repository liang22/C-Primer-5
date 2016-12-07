#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::string;
using std::vector;

int main()
{
    string word;
    vector<string> svec;

    // 循环向vector<string>中输入元素
    while (cin >> word)
        svec.push_back(word);

    return 0;
}