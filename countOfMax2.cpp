//using count sort
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int size;
        cin>>size;
        int a;
        int max=0,count=0;
        int countSort[10001]={0};
        for(int j=0;j<size;j++)
        {
            cin>>a;
            countSort[a]++;
            if(countSort[a]>count)
            {
                count=countSort[a];
                max=a;
            }
            if(countSort[a]==count)
            {
                if(a<max)
                {
                    max=a;
                }
            }

        }
        cout<<max<<" "<<count<<endl;
    }
}
