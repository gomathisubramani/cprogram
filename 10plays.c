#include <stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10];
	int l,k,i,count=0;
	printf("\n enter the string");
	scanf("%s",a);
	printf("\n enter the second string");
	scanf("%s",b);
	l=strlen(a);
	k=strlen(b);
	for(i=0;i<l;i++)
	{
		if(a[i]!=b[i])
		{
			count++;
		}
	}
	if(count==1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
