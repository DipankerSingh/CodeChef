#include<iostream>
using namespace std;
int main()
{
    long long int t,n,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cin>>c;
        long long int sum=0;
        for(int j=0;j<n;j++)
        {
            long long int a;
            cin>>a;
            sum=sum+a;
        }
        if(sum<=c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}
