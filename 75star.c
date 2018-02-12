#include <stdio.h>
#include<string.h>
int main()
{
	char a[10],m;
	 int i,k;
	printf("enter the string");
	scanf("%s",a);
	k=strlen(a);
	m='*';
	a(k/2)=m;
	for(i=0;i<k;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
