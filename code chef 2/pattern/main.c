#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int i,j,c=5;
    for(i=0;i<=5;i++)
    {for(j=1;j<=c;j++)
        {
            printf("*");
        }
        c--;
        printf("\n");
    }
}*/
int main()
{
    int p,q,r,a=5,b=1;
    for(p=1;p<=5;p++)
    {
     for(q=1;q<=a;q++)
     {
         printf(" ");
     }
     for(r=1;r<=b;r++)
     {
         printf("* ");
     }
     printf("\n");
     a--;
     b++;
    }
    return 0;
}
