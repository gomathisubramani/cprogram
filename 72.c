#include <stdio.h>
#include<string.h>
int main()
{
	char a[10];
	int i,k,count=0;
	printf("enter the string");
	scanf("%s",a);
	k=strlen(a);
	for(i=0;i<=k;i++)
	{
	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
	{
		count++;
	}
	}
		if(count>0)
		{
		printf("yes");
		}
	
	else
	{
		printf("no");
	}
	
	return 0;
}
