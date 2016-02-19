#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,w;
    cin>>n>>w;
    int s[n],v[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
        cin>>v[i];
    int dp[n+1][w+1];

    for(int i=n;i>=0;i--)
    {
        for(int j=0;j<=w;j++)
        {
            if(i==n)
            {
                dp[i][j]=0;
            }
            else
            {
                if(j-s[i]>=0)
                dp[i][j]=max(dp[i+1][j],v[i]+dp[i+1][j-s[i]]);
                else
                    dp[i][j]=dp[i+1][j];
            }

        }
    }


    for(int j=0;j<=w;j++)
    {
        for(int i=0;i<=n;i++)
        {
            cout<<dp[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<"answer is "<<dp[0][w];
}
