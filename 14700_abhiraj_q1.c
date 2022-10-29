#include<stdio.h>
#include "intro.c"
int main()
{
    printf("Abhiraj Singh Rana\n 14700");
    int number;
    printf("enter a number ");
    scanf("%d",&number);
    if (number & 1) {
        printf("odd");
    }
    else
    printf("even");



}
