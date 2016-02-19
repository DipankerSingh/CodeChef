#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testCases,message[100000],numberOfSttudent,i;
    scanf("%d",&testCases);
    scanf("%d",&numberOfSttudent);
    for(i=0;i<numberOfSttudent;i++)
    scanf("%d",&message[i]);
    int j,count=0;
    for(j=0;j<numberOfSttudent-2;j=j+2)
    {
    if((message[j]!=message[j+1])&&(message[j+1]!=message[j+2]))
    count+=3;
    else if((message[j]!=message[j+1])||(message[j+1]!=message[j+2]))
    count+=2;
    if(

    }
    printf("%d",count);
    return 0;
}
