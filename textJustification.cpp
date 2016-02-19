#include<iostream>
#include<bits/stdc++.h>
#define INF INT_MAX
using namespace std;

void solveWordWrap(int l[],int n,int m)
{
    //subproblems=n
    //recurrence=where to start second line
    //no. of choices = n-i;
    //state=dp[i]
    //for j in range i+1,n+1
    //dp[i]=min(dp[j]+badness(i,j))
    //topological order = n , n-1, n-1......0
    //dp[n]=0;
    //total time complexity n^2
    //Solution = dp[0];
    //now the above solution will the minimum badness
    //but will not tell the best way for minimum badness
    //for that we introduce parent pointers
    //these parent pointers will remember "What was the best choice"
    //what was the value of j which gave minimum badness

    int preCompute[n][n];
    int dp[n+1];
    dp[n]=0;

    for(int i=0;i<n;i++)
    {
        preCompute[i][i]=m-l[i];
        for(int j=i+1;j<n;j++)
        {
            preCompute[i][j]=preCompute[i][j-1]-l[j]-1;
        }
    }

    for(int i=0;i<n;i++)
    {

        preCompute[i][i]=preCompute[i][i]*preCompute[i][i];
        for(int j=i+1;j<n;j++)
        {
            if(preCompute[i][j]>=0)
            preCompute[i][j]=pow(preCompute[i][j],2);
            else
            preCompute[i][j]=1000;
        }
    }



    for(int i=n-1;i>=0;i--)
    {
        vector<int> choices;
        for(int j=i+1;j<=n;j++)
        {
            choices.push_back(preCompute[i][j-1]+dp[j]);

        }
        dp[i]=*min_element(begin(choices),end(choices));
    }

    cout<<dp[0]<<endl;

}



int main()
{
    int l[]={6,3,5,2,4};
    int n=sizeof(l)/sizeof(l[0]);
    int m=10;
    solveWordWrap(l,n,m);
    return 0;
}
