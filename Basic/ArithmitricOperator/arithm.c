#include <stdio.h>

int main()
{
    int i = 11;
    float j = 3.5f;
    float k = (float)i*j;
    printf("k:%f\n",k);

    int p,q;
    p = 10;
    q = 3;
    int t = p/q;
    float z = 10/3;
    float z1 = 3.0f;
    float z2 = 10/z1;

    printf("t:%d\n",t);
    printf("z:%f\n",z);
    printf("z2:%f\n",z2);
//    printf("10/0:%d\n",10/0);     
//    printf("10%3.3:%d\n",10%3.3);    

    return 0;
}