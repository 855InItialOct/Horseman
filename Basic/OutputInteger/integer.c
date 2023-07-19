#include <stdio.h>

int main()
{
    short b = -123;
    printf("short:%hd\n",b);
    unsigned short b1 = 123;
    printf("unsigned short:%hu\n",b1);

    int c = -1234;
    printf("int:%d\n",c);
    unsigned int c1 = 1234;
    printf("unsigned int:%u\n",c1);

    long d = -12345;
    printf("long:%ld\n",d);
    unsigned long d1 = 12345;
    printf("unsigned long:%lu\n",d1);

    long long e = -123456;
    printf("long long:%lld\n",e);
    unsigned long long e1 = 123456;
    printf("unsigned long long:%llu\n",e1);

    return 0;
}