#include <stdio.h>
#include<string.h>

int main()
{
	char b[100]="welcome to our department";
	 int i,count=0;
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==' ')
			count++;
	}
	printf("no. of words are %d",count);
	return 0;
}
