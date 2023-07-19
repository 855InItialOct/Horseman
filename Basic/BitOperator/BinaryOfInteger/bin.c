#include <stdio.h>

void printBinary(int num)
{
    int size = sizeof(num) * 8; // 计算整数的位数
    int i;
    for (i = size - 1; i >= 0; i--)
    {
        int bit = (num >> i) & 1; // 获取当前位的值
        printf("%d", bit);
    }
    printf("\n");
}

int main()
{
    int number; // 要打印的整数

    scanf("%d", &number);
    printf("Binary representation of %d: ", number);
    printBinary(number);

    return 0;
}