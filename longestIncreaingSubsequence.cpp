#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int input[10];
    for(int i=0;i<10;i++)
    {
        cin>>input[i];
    }
    int dp[10];
    for(int i=9;i>=0;i--)
    {
        vector<int> choices;
        choices.push_back(1);
        for(int j=i+1;j<10;j++)
        {
            if(input[i]<input[j])
            {
                choices.push_back(dp[j]+1);
            }

        }
        dp[i]=*max_element(begin(choices),end(choices));
    }
    cout<<*max_element(dp,dp+9)<<endl;
}
