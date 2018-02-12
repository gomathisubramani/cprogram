#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
	if((n%i)==0)
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
