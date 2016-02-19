#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    long long frequency[100001]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        frequency[a[i]]++;
    }
    long long int dp[100003]={0};
    for(int i=100000;i>=0;i--)
    {
        dp[i]=max(dp[i+1],i*frequency[i]+dp[i+2]);
    }
    cout<<dp[0];
}
