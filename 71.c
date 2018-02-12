#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,k,count=0;
	char a[10];
	printf("enter the string");
	scanf("%s",a);
	i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	k=i-1;
	for(j=0;j<i;j++)
	{
		if(a[j]==a[k])
		{
			count++;
			//printf("--->%d\n",count);
		}
		k--;
	}
	
	if(i==count)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
