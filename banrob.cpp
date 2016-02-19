#include<iostream>
#include <bits/stdc++.h>
#define D 1000000000.0

using namespace std;

double power(double x, long long int y)
{
    double temp;
    if( y == 0)
       return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
    {
        if(y > 0)
            return x*temp*temp;
        else
            return (temp*temp)/x;
    }
}

int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       long long int m;
       cin>>m;
       double p;
       cin>>p;
       double returned = power(p,m);

       if(m%2!=0)
       {
         double chefMoney = (D*(1+returned))/(1+p);
         printf("%.15lf %.15lf\n",chefMoney,D-chefMoney);
       }
       else
        {
          double chefMoney = (D*(1-returned))/(1+p);
       printf("%.15lf %.15lf\n",chefMoney,D-chefMoney);
       }
   }
}
