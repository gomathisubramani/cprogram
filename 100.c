#include <stdio.h>
void main()
{
	int a,result,sum=1;
	printf("enter the total number");
	scanf("%d",&a);
	while(a!=0)
	{
		result=a%10;
		sum=sum*result;
		a=a/10;
	}
	printf("the multiplication is %d",sum);
}
