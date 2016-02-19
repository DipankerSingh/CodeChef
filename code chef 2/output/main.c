#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s[]={'a','b','c','\n','c','\0'};
    char *p,str,q,q1,*strl;
    p=s[3];
    str=p;
    strl=s;

    printf("%d",++*p + ++*strl-32);
    return 0;
}
