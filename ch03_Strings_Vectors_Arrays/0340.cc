#include <cstring>

int main()
{
    char s1[] = "abc";
    char s2[] = "def";
    char s3[128] = "";

    // 处理C风格字符串
    strcpy(s3,s1);
    strcat(s3,s2);

    return 0;
}