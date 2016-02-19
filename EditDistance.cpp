#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char string1[100];
    cin>>string1;
    char string2[100];
    cin>>string2;
    int l1=strlen(string1);
    int l2=strlen(string2);
    int dp[l1+1][l2+1];
    dp[0][0]=0;
    for(int i=0;i<=l1;i++)
    {
        for(int j=0;j<=l2;j++)
        {
            if(i==0)
            {
                dp[i][j]=j;
            }
            else if(j==0)
            {
                dp[i][j]=i;
            }
            else if(string1[i-1]==string2[j-1])
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else
            {
                vector<int> choices;
                choices.push_back(1+dp[i][j-1]); //insert   instead of 1 there can be values assigned by the user
                                                 //then it's the case of weighted min edit distance
                choices.push_back(1+dp[i-1][j]); //delete
                choices.push_back(1+dp[i-1][j-1]); //replace
                dp[i][j]=*min_element(begin(choices),end(choices));

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
