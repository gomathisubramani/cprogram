#include<stdio.h>
int main()
{
	int a,i;
	printf("enter the number");
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
	if((a%i)==0)
	break;
	}
	if(i==2)
	{
		printf("prime number");
	}
	else
	{
		printf("composite number");
	}
	return 0;
}
