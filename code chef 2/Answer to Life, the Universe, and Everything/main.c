#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[99],i,j;
for(i=1;i<=99;i++)
{
    scanf("%d",&a[i]);
    if(a[i]==42)
    {

     j=i;
        break;}
}
for(i=1;i<=j-1;i++)
{

printf("%d \n",a[i]);
}
return 0
}
