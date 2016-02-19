#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp,n,i,j,a,p,count=0;
    scanf("%d",&n);
    while(p)
        {


            p=(p/10);
            count=count+1;

        }
    for(i=1;i<=count;i++)
        {
            j=n%10;
            n=n/10;
            if(i=1)
            {
                temp=j;
            switch(j)
               {

                case 1:
                printf("one");
                case 2:
                printf("two");
                case 3:
                printf("three");
                break;
                case 4:
                printf("four");
                case 5:
                printf("five");
                case 6:
                printf("six");
                case 7:
                printf("seven");
                case 8:
                printf("eight");
                case 9:
                printf("nine");
                default :
                    continue;
               }
            }
            else if(i=2)
            {
                switch(j){
                case 1:
                a=10+temp;
                switch(a)
              {

               case 10:
                printf("ten");
                case 11:
                printf("eleven");
                case 12:
                printf("twelve");
                case 13:
                printf("thirteen");
                case 14:
                printf("fourteen");
                case 15:
                printf("fifteen");
                case 16:
                printf("sixteen");
                case 17:
                printf("seventeen");
                case 18:
                printf("eighteen");
                case 19:
                printf("nineteen");
                default :
                    continue;
            }
                case 2:
                printf("twenty");
                break;
                case 3:
                printf("thirty");
                case 4:
                printf("forty");
                case 5:
                printf("fifty");
                case 6:
                printf("sixty");
                case 7:
                printf("seventy");
                case 8:
                printf("eighty");
                case 9:
                printf("ninety");
                default :
                    continue;
            }}


        }
    return 0;
}
