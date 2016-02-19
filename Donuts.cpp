#include<iostream>
using namespace std;
#include <bits/stdc++.h>
/*
void mergeSort(long long input[],long long n)
{

    if(n==1)
    {
        return;
    }
    long long array1[n/2],array2[n-n/2];
    for(int i=0;i<n/2;i++)
    {
        array1[i]=input[i];
    }
    int j=0;
    for(int i=n/2;i<n;i++)
    {

        array2[j]=input[i];
        j++;
    }
    mergeSort(array1,n/2);
    mergeSort(array2,n-n/2);

    int t=n,k=0,count=0;
        int i=0,min;
        j=0;
    while((k<t))
        {

        if(array1[i]<array2[j])
        {
            input[count]=array1[i];
            count++;

            i++;

            k++;
        }
        else
        {

            input[count]=array2[j];
            count++;
            j++;
            k++;
        }
        if(j==n-n/2)
        {
            while(k<t)
            {
             input[count]=array1[i];
             count++;
             i++;
             k++;
            }
            return;
        }
        if(i==n/2)
        {
            while(k<t)
            {


             input[count]=array2[j];
             count++;
             j++;
             k++;
            }

        }
    }
    return;
}
*/
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long n,m;
        scanf("%lld%lld",&n,&m);
        int x=0,y=0;
        long long input[m];
        for(int j=0;j<m;j++)
        {
            scanf("%lld",&input[j]);
            if(input[j]==1)
            {
                x++;
            }
            else
            {
                y++;
            }
        }

        if(x>y)
        {
            if(y!=0)
            {
            int a=x-y+1;
            printf("%d \n",y-1+a/2);

            }
            else
            printf("%d \n",x/2);
        }
        if(x==y)
        {
            printf("%d \n",x);

        }
        if(x<y)
        {
            if((y-x)==1)
            {
                printf("%d \n",x);

            }
            else
            {
                sort(input,input+m);
                long long output=x;
                long long spacesToBeJoined=y-1-x;
                int flag=0;
                while(spacesToBeJoined!=0)
                {
                    while(input[x]!=0)
                    {
                        input[x]--;
                        output++;
                        spacesToBeJoined--;
                        if(spacesToBeJoined==0)
                        {
                            flag=1;
                            break;
                        }
                        if(input[x]==0)
                        {
                            spacesToBeJoined--;
                            x++;
                            if(spacesToBeJoined==0)
                            {
                                flag=1;
                                break;
                            }
                        }
                    }
                    if(flag==1)
                    {
                        break;
                    }
                }
                printf("%lld \n",output);


            }

        }



    }
}
