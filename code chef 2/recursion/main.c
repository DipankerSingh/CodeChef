#include <stdio.h>
#include <stdlib.h>

int lowerBound,upperBound;
void func(int lowerBound)
{
printf("%d \n",lowerBound);
if(lowerBound<upperBound)
func(lowerBound+1);
}
int main()
{
    printf("enter the upperBound and the lowerBound");
    scanf("%d %d",&upperBound,&lowerBound);
    func(lowerBound);
}
