#include<stdio.h>
void main()
{
    int f=0,s=1,b,lim,i;
    printf("enter the limit");
    scanf("%d",&lim);
    printf("%d%d",f,s);
    for(i=2;i<=lim;i++)
    {
        b=f+s;
        f=s;
        s=b;
        printf("%d",b);
    }
}
