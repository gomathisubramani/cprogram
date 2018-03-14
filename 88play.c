#include<stdio.h>
void main()
{
	int a,b;
	float c;
	printf("\n enter the number");
	scanf("%d%d",&a,&b);
	c=a>>b;
	printf("\n bitwise rightshift pation is %f",c);
}
