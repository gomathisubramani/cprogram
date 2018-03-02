#include <stdio.h>
int main()
{
	int i,n,k;
	char a[20];
	printf("enter the string");
	scanf("%s",a);
	printf("enter the number");
	scanf("%d",&n);
	k=strlen(a);
	for(i=k-1;i<k;i++)
	{
		printf("%c",a[i]);
	}
}
