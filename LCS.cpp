#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[100];
    char str2[100];
    cin>>str1>>str2;
    int l1=strlen(str1);
    int l2=strlen(str2);
    int dp[l1+1][l2+1];
    for(int i=0;i<=l1;i++)
    {
        for(int j=0;j<=l2;j++)
        {
            if(i==0)
            {
                dp[i][j]=0;
            }
            else if(j==0)
            {
                dp[i][j]=0;
            }
            else if(str1[i-1]==str2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];

            }
            else
            {
                vector<int>choices;

                choices.push_back(dp[i-1][j-1]);
                choices.push_back(dp[i][j-1]);
                choices.push_back(dp[i-1][j]);
                dp[i][j]=*max_element(begin(choices),end(choices));
            }
        }

    }


    for(int i=0;i<=l1;i++)
    {
        for(int j=0;j<=l2;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}
