#include<iostream>
#include <cmath>
#include<stdio.h>
#define root2 1.41421356237309504880
#define root3 1.7320508075688772935
using namespace std;

double exponent(double x, long long y)
{
	double smaller;
	if( y == 0)
	return 1.0;
	smaller = exponent(x, y/2);
	if (y%2 == 0)
		return smaller*smaller;
	else
	{
		if(y > 0)
			return x*smaller*smaller;
		else
			return (smaller*smaller)/x;
	}
}

int main()
{
    double i,k,s,a_i,b_i,output,difference;
    cin>>i>>k>>s;
    cin>>a_i>>b_i;
    difference=k-i;
    double modDifference=abs(difference);

    if((long long)difference%2==0)
    {


        if((long long)difference>=0)
        {
            double transformer=exponent(2,(2*modDifference)-s);
            output=(transformer*(a_i+b_i));
            printf("%.15f\n",output);
        }
        else
        {
            double transformer=exponent(2,(2*modDifference)+(s));
            output=((a_i+b_i)/transformer);
            printf("%.15f\n",output);
        }
    }
    else
    {
        if((long long)difference>0)
        {


            modDifference=modDifference-1.0;
            double transformer=exponent(2,(2*modDifference)-s);
            double preCompute1=(transformer*(a_i+b_i));
            double preCompute2=(transformer*(a_i-b_i));
            output=((root2*preCompute1)-(root2*root3*preCompute2)+(root2*preCompute2)+(root2*root3*preCompute1));

            printf("%.15f\n",output);
        }
        else
        {

            modDifference=modDifference-1.0;
            double transformer=exponent(2,(2*modDifference)+(s)+4);
            double preCompute1=((a_i+b_i)/transformer);
            double preCompute2=((a_i-b_i)/transformer);
            output=((root2*(1.0+root3)*preCompute1)+(root2*(1.0-root3)*preCompute2));

            printf("%.15f\n",output);
        }

    }
    return 0;
}


