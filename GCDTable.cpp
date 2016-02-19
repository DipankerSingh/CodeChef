#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int compareints (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{
    long long int n;
    cin>>n;
    long long int  b=n*n;
    long long int a[b];
    long long int max=-1;
    long long int answer[n];

    map<long long int,long long int> frequency;
    for(int i=0;i<b;i++)
    {
        cin>>a[i];
        if(frequency[a[i]]>0)
        frequency[a[i]]+=1;
        else
            frequency[a[i]]=1;
    }

    qsort(a,b,sizeof(long long int),compareints);

    answer[n-1]=*max_element(a,a+b);
    *max_element(a,a+b)=-1;
    qsort(a,b,sizeof(long long int),compareints);
    frequency[answer[n-1]]-=1;
    if(n==1)
    {
        cout<<answer[n-1]<<endl;
        return 0;
    }
    answer[n-2]=*max_element(a,a+b);
    *max_element(a,a+b)=-1;
    qsort(a,b,sizeof(long long int),compareints);
    frequency[answer[n-2]]-=1;
    frequency[gcd(answer[n-1],answer[n-2])]-=2;
    int key=gcd(answer[n-1],answer[n-2]);
    long long int *ptr;
    ptr=(long long int*)bsearch (&key,a,b, sizeof(long long int), compareints);
    *ptr=-1;
    qsort(a,b,sizeof(long long int),compareints);
    ptr=(long long int*)bsearch (&key,a,b, sizeof(long long int), compareints);
    *ptr=-1;
    qsort(a,b,sizeof(long long int),compareints);
    for(int pos=n-3;pos>=0;pos--)
    {
        answer[pos]=*max_element(a,a+b);
        qsort(a,b,sizeof(long long int),compareints);

        *max_element(a,a+b)=-1;
        qsort(a,b,sizeof(long long int),compareints);
        for(int k=pos+1;k<=n-1;k++)
        {
            frequency[gcd(answer[pos],answer[k])]-=2;
            int key=gcd(answer[pos],answer[k]);
            long long int *ptr;
            ptr=(long long int*)bsearch (&key,a,b, sizeof(long long int), compareints);
            *ptr=-1;
            qsort(a,b,sizeof(long long int),compareints);
            ptr=(long long int*)bsearch (&key,a,b, sizeof(long long int), compareints);
            *ptr=-1;
            qsort(a,b,sizeof(long long int),compareints);
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<answer[i]<<endl;
    }

}
