#include <stdio.h>
#include <stdlib.h>

int main()
{

    int testCases;
    int j,count=0,array2[100000]={0},message[100000],numberOfSttudent,i,l;
    scanf("%d",&testCases);

    for(l=0;l<testCases;l++)
    {
       int j,count=0,array2[100000]={0},message[100000],numberOfSttudent,i,l;

    scanf("%d",&numberOfSttudent);
    for(i=0;i<numberOfSttudent;i++)
    scanf("%d",&message[i]);

    for(j=0;j<numberOfSttudent-1;j++)
    {
    if(message[j]!=message[j+1])
    array2[j]=array2[j+1]=1;

    }
    int k;
    for(k=0;k<numberOfSttudent;k++)
    {
    if(array2[k]==1)
    count++;
    }
    printf("%d \n",count);
    }
    return 0;
}
