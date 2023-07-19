#include <stdio.h>

int main(void)
{
    int a;

    scanf("%d", &a);

    //将a的第3个bit位置1
    //方法1：
//    a = a | 0x08;
    //方法2：
//    a = a | (1 << 3);

    //将a的第3个bit位置0
//    a = a & 0xF7;
    //即
//    a = a & (~0x08);
    //或
    a = a & ~(1 << 3);

    printf("%d\n", a);

    return 0;
}