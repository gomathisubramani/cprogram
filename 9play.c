#include <stdio.h>
void main()
{
	int a,b,i,count=0;
	printf("enter the first range");
	scanf("%d",&a);
	printf("enter the second range");
	scanf("%d",&b);
	for(i=0;(i>a)&&(i<b);i++)
	{
		if((i%2)!=0)
		{
			count++;
		}
	}
	printf("%d",i);
}
