#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int b[10000010];
int main()
{
    int a,c=0,d,i,e;
    scanf(" %d",&a);
    for(i=1;i<=a;i++)
        {scanf(" %d",&b[i]);}
    for(i=1;i<=a;i++)
    {
    for(d=1;;d++)
    {
        c+=b[i]/(5^d);
        if(b[i]<(5^d))
        break;
    }
    printf("%d \n",c);
    c=0;
    }
    return 0;
}
