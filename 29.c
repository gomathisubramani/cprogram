#include<stdio.h>
void main()
{
    int a,b,d;
    printf("enter the minute");
    scanf("%d",&d);
    a=d/60;
    b=d%60;
    printf("hour%d minute%d",a,b);
    
}
