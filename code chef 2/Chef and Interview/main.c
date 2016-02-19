#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long testCases,p;
    scanf("%lld",&testCases);
    for(p=0;p<testCases;p++)
    {
    long long i,LCM,sum=0;
    scanf("%lld",&LCM);
    for(i=1;i<=sqrt(LCM);i++)
        if((LCM%i)==0)
        sum+=i+(LCM/i);

    if(sqrt(LCM)*sqrt(LCM)==LCM)
        sum=sum-sqrt(LCM);
        printf("%lld\n",sum);
    }
    return 0;
}
