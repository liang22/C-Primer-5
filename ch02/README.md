**0201**</br>
    使用Int执行整数运算。在实际应用中，short常常显得太小而long一般和Int有一样的尺寸。如果你的数值超过了int的表示范围，选用long long</br>
    当明确知晓数值不可能为负时，选用无符号类型</br>
    执行浮点数运算选用double，因为计算代价相差无几或更快</br>

**0202**</br>
    都选用double</br>

**0203**</br>
    unsigned u = 10, u2 = 42;</br>
    std::cout << u2 - u << std::endl;</br>
    std::cout << u - u2 << std::endl;</br>
    int i = 10, i2 = 42;</br>
    std::cout << i2 - i << std::endl;</br>
    std::cout << i - i2 << std::endl;</br>
    std::cout << i - u << std::endl;</br>
    std::cout << u - i << std::endl;</br>
    输出  32  2^32-32  32  -32  0  0
