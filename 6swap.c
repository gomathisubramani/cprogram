#include<stdio.h>
void swap(int,int);
int main()
{
    int a,b;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    printf("number is before swapping %d%d",a,b);
    swap(a,b);
    printf("number after swapping %d%d",a,b);
}
void swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swap function a&b values are %d%d",a,b);
}
