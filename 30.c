#include<stdio.h>
void main()
{
    int a,d,e,f,g,h;
    printf("enter the  first time hour and minute");
    scanf("%d%d",&d,&e);
    printf("enter the second time hour and minute");
    scanf("%d%d",&g,&f);
    a=d-g;
    h=e-f;
    printf(" the difference in hour minute %d %d",a,h);
    
}
