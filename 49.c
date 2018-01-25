#include <stdio.h>

int main(void) {
	int n,sum=0,i,avg;
	printf("enter the no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	avg=sum/n;
	printf("avg is %d",avg);
	return 0;
}
