#include<stdio.h>
void main()
{
    int b,d,c;
    printf("enter the number");
    scanf("%d%d",&b,&c);
    d=b-c;
    if((d%2)==0)
    printf("the number is even %d",d);
    else
    printf("the number is odd %d",d);
}
