#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,count,i,j;
    printf("enter two nos");
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++)
    {
        j=i*i;
        if((j<b)&&(j>a))
            printf("%d \n",j);

    }

    return 0;
}
