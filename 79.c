#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    c=a*b;
    if(a==b)
    {
        printf(" \n yes %d",c);
    }
    else
    {
        printf("\n no %d",c);
    }
}
