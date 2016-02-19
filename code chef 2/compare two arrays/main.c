#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[100],c,d,i,j,count=0,f,k,fin[100],p;
    printf("enter the limit of first array \n");
    scanf("%d",&c);
    printf("enter the first array \n");
    for(i=0;i<c;i++)
    {
        scanf("%d",&a[i]);
    }
 for(i=0;i<c;i++)
    {
printf("%d",a[i]);
}    printf("enter the limit of second array \n");
    scanf("%d",&d);
    printf("enter the second array \n");
    for(j=0;j<d;j++)
    {
        scanf("%d",&b[j]);
    }
     /*   if(c>d)
        {
        for(f=0;f<d;f++)
            {
                for(k=0;k<c;k++)
                {
                    if(a[k]=b[f])
                        {
                            final[count]=a[k];
                            count++;
                        }

                }
            }
        }
    else
        {*/

            for(f=0;f<c;f++)
                {
                    for(k=0;k<d;k++)
                        {
                            if(a[f]==b[k])
                                {
                                    fin[count]=a[f];
                                    count++;
                                }

                        }
                }
     //   }
fflush(stdin);
    printf("the no. of elements common in the given arrays are %d\n",count);
    printf("the common elements are\n ");
//
//    printf("[");

printf("%d",count);

    for(p=0;p<=count;p++)
    {
          printf("%d",fin[p]);
          printf("\n");
    }
   //printf("]");
            return 0;

}
