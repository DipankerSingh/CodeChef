#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int Testcases,i;
     int N,length,patternLength,count,x,numberOfCycles,j,k;
    scanf("%d",&Testcases);                                              //2
    while(Testcases--)                                            //m=0
    {
    count=0;x=1;
    char pattern[10000];

    scanf("%s",&pattern);                                              //TTTT
    scanf("%d",&N);                                                      //1
    length=12*N;
                                                          //12
    patternLength=strlen(pattern);
                                           //4

    for(i=0;i<patternLength;i++)
    {

        if(pattern[i]=='T')                                              //x=3,x=5,x=7,x=9
           {
               x=x+2;}
        else
            {x=x+1;}

    }
      numberOfCycles=length/(x-1);                                        //numberOfCycles=1
      for(j=1;j<=numberOfCycles;j++)
      {
          k=(x-1)*j;                                                     //k=8
          count+=(length-k);
      }

    printf("%d\n",count);
    }
    return 0;
}
