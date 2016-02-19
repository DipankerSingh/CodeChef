#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int size=n*n;
        long long input;
        long long output=0;

        long long coordinates[size][2];
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                cin>>input;
                coordinates[input-1][0]=j;

                coordinates[input-1][1]=k;


            }
        }

        for(int k=0;k<size-1;k++)
        {
           int a=coordinates[k+1][1]-coordinates[k][1];

           int b=coordinates[k+1][0]-coordinates[k][0];

           if(a<0)
           {
               a=-a;
           }
           if(b<0)
           {
               b=-b;
           }
           output=output+a+b;
        }

        cout<<output<<endl;
    }
}
