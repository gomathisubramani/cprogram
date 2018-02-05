#include<stdio.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	while((a%10)!=0)
	a++;
	printf("%d",a);
}
