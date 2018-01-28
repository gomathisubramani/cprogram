#include <stdio.h>
#include<string.h>
int  main()
{
	int b,i,c;
	char a[10]="welcome456";
	b=strlen(a);
	for(i=1;i<=b;i++)
	{
	while(((a[i]=='a')||(a[i]=='A'))&&((a[i]=='z')||(a[i]=='Z')))
	 {        
	 	c++;
	 }
	}
	if(c==b)
	{
		printf("string has only alphabets %s",a);
	}
	else
	{
		printf("string has both alphabets and numbers %s",a);
	}
	
	return 0;
}
