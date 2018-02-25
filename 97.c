#include<stdio.h>
int main()
{
    int number,b,sum=0;
    printf("enter the number");
    scanf("%d",&number);
    while(number!=0)
    {
    b=number%10;
    sum=(sum*10)+b;
    number=number/10;
    }
    printf("the reverse number is %d",sum);
}
