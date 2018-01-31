#include<stdio.h>
void main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if((a%7)==0)
    printf("the number is multiples of seven %d",a);
    else
    printf("the number is not multiples of seven %d",a);
}
