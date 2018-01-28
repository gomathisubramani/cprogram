#include<stdio.h>
void swap(int *,int *);
int main()
{
    int b,c;
    printf("enter the number");
    scanf("%d%d",&b,&c);
    printf("number is before swapping %d%d",b,c);
    swap(&b,&c);
    printf("number after swapping %d%d",b,c);
}
void swap(int *b,int *c)
{
    *b=*b+*c;
    *c=*b-*c;
    *b=*b-*c;
    printf("swap function a&b values are %d%d",*b,*c);
}
