void txt_size()
{
    //return一个int
}

int main()
{
    unsigned buf_size = 1024;

    int ia[buf_size];                                        // 错误，buf_size不是常量表达式
    int ia[4 * 7 - 14];                                      // 正确
    int ia[txt_size()];                                      // 错误，txt_size返回的不是常量表达式
    char st[11] = "fundamental";                             // 错误，没有空间存放空字符

    return 0;
}