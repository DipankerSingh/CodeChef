#include <stdio.h>
#include <stdlib.h>

    //function prototypes
    void printBarRow(int x);
    void showBarChart(void);
    int i;
int main()
{
    showBarChart();
    return 0;
}

void printBarRow(int n){
printf("%2d:",n);
for(i=1;i<=n;i++){
    printf(".");
}
printf("\n");
}

void showBarChart(){
    printBarRow(10);
    printBarRow(15);
    printBarRow(5);
    printBarRow(13);
}
