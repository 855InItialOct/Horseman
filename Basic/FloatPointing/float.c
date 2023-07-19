#include <stdio.h>

int main()
{
    float f = 23.123456789123f;
    double f1 = 23.123456789123;
    printf("float:%f\n",f);
    printf("float:%10.3f\n",f);
    printf("%f\n",3/2);
    printf("double:%.12lf\n",f1);

    return 0;
}