#include<stdio.h>
void main()
{
    int i,a,f=1;
    printf("enter the numebr");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
       f=f*i; 
    }
    printf( "%d",f);
}
