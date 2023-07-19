#include <stdio.h>

int main()
{

    int before = 2;
    int after = ++before;
    printf("before:%d\t after:%d\n",before,after);

    int before1 = 2;
    int after1 = before++;
    printf("before:%d\t after:%d\n",before,after);

    return 0;
}