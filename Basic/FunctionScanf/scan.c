#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    printf("x:%d\n",x);

    getchar();//捕捉回车键

    char y;
    scanf("%c", &y);
    printf("y:%c\n",y);

    getchar();

    int m;
    char n;
    scanf("%d %c",&m,&n);
    printf("m:%d\tn:%c\n",m,n);

    return 0;
}