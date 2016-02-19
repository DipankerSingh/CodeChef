#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//prototype definitions
void dataGenerator(void);
void showBarChart(void);
void printBarRow(int x);
int dataSet[10];
int i;
int main()
{
    dataGenerator();
    showBarChart();
    return 0;
}

void dataGenerator(void){
srand(time(NULL));
for(i=0;i<10;i++){
    dataSet[i]=rand()%50;
}
}

void showBarChart(void){
for(i=0;i<10;i++){
   printBarRow(dataSet[i]);
}
}
void printBarRow(int x){
printf("%2d:",x);
for(i=0;i<x;i++){
    printf(".");
}
printf("\n");
}
