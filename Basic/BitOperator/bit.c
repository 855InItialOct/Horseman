#include <stdio.h>

int main()
{
    int bit = 60;
    int bit1 = 30;

    //按位与 & 0和任意值 按位与得0
    printf("bit & bit1:%d\n",bit & bit1);

    //按位与 | 1和任意值 按位或得1
    printf("bit | bit1:%d\n",bit | bit1);

    //按位异或 ^ 相同为0 不同为1
    printf("bit ^ bit1:%d\n",bit ^ bit1);

    //按位取反 ~
    printf("~bit:%d\n",~bit);

    //按位左移 << 高位左移，低位补零 左移n位 乘以2的n次方
    printf("bit << 2:%d\n",bit << 2);

    //按位右移 << 低位右移，高位补符号位 左移n位 除以2的n次方
    printf("bit >> 2:%d\n",bit >> 2);

    return 0;
}