#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,c,d=0;
    scanf(" %d%d",&a,&b);
    for(i=1;i<=a;i++)
{
    scanf(" %d",&c);
    if(c%b==0)
        d++;
    else
        d=d;
}
    printf("%d",d);
    return 0;
}
