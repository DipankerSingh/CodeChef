#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={40,20,30,10,30};
    int n=(sizeof(a)/sizeof(a[0]));
    int dp[n][n];
    for(int i=0;i<n;i++)
    {
        dp[i][i+1]=0;
    }
    for(int size=2;size<n;size++)
    {
        for(int i=0;i<n-size;i++)
        {
            int j=i+size;
            vector<int> choices;


            for(int k=i+1;k<j;k++)
            {
                choices.push_back(dp[i][k]+dp[k][j]+a[i]*a[j]*a[k]);
            }
            dp[i][j]=*min_element(begin(choices),end(choices));
            }
    }







    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

            (j<i+1)?cout<<"0"<<"      ":cout<<dp[i][j]<<"      ";
        }
        cout<<endl;
    }

}
