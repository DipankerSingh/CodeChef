#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x;
        cin>>n>>m>>x;
        int pivot1=n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]=a[i]%m;
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if((a[i]+a[i])>m-1)
            {
                pivot1=i;
                break;
            }
        }

        int answer=0;

        for(int i=0;i<pivot1;i++)
        {
            for(int j=pivot1;j<n;j++)
            {
                if((a[i]+a[j])%m<=x)
                {
                    answer=answer+2;
                }
            }
        }

        int pivot2=pivot1;
        for(int i=pivot1;i<n;i++)
        {

            if((a[i]+a[i])>(m+x))
            {
                pivot2=a[i];
                break;
            }
            pivot2++;
        }
        int pivot3=0;

        for(int i=0;i<pivot1;i++)
        {

            if((a[i]+a[i])>x)
            {
                pivot3=i;
                break;
            }
            pivot3++;
        }

        answer=answer+pivot3*pivot3;
        answer=answer+(pivot1-pivot2)*(pivot1-pivot2);
        for(int i=0;i<pivot3;i++)
        {
            for(int j=pivot3;j<pivot1;j++)
            {
                if(a[i]+a[j]<=x)
                {
                    answer=answer+2;
                }
                break;
            }
        }
        for(int i=pivot1;i<pivot2;i++)
        {
            for(int j=pivot2;j<n;j++)
            {
                if(a[i]+a[j]<=m+x)
                {
                    answer=answer+2;
                }
                break;
            }
        }

        cout<<answer<<endl;


    }
}
