#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;
    float b,c;
    scanf("%d %f",&a,&b);
    c=(b-0.50);
    if((a<c)&&(a%5==0))
       {
       printf("%.2f",c-a);}
    else
        printf("%.2f",b);
    return 0;
}
