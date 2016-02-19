#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int* roundOutcome(int i,int h,int input[]) // create this function on the basis of rules given in the question !
{
    int O[2];
    int player=0,dealer=0;
    player=player+input[i]+input[i+2];
    dealer=dealer+input[i+1]+input[i+3];
    i=i+4;
    for(int j=h;j>0;j--)
    {
        if(i>51)
        {
            O[0]=4;

        }
    }

    return O;
}
int main()
{
    int input[52];
    for(int i=0;i<52;i++)
    {
        cin>>input[i];
    }
    int dp[52];//max money we can win by optically starting at card i
    for(int i=51;i>=0;i--)
    {
    vector<int> choices;
    choices.push_back(0);
    for(int h=0;h<=52-i;h++)   // if h hits are not possible then RoundOutcome function will return -infinity, signifying not possible and don't chose this path
    {
        int*O;
        O=roundOutcome(i,h,input); //O[0]=moneyWon O[1]=no. of cards played
        choices.push_back(*(O+1)+dp[i+(*O)]);
        dp[i]=*(max_element(begin(choices),end(choices)));
    }
    }
    cout<<"maximum money that can be earned is "<<dp[0]<<endl;
}
