 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	int i,j,count=0,n;
 	char s[20];
 	printf("\n enter the string");
 	scanf("%s",s);
 	n=strlen(s);
 	for(i=0;i<n;i++)
 	{
 		for(j=i+1;j<n;j++)
 		{
 			if(s[i]==s[j])
 			{
 				count++;
 				break;
 			}
 		}
 	}
 	if(count==0)
 	printf("yes");
 	else
 	printf("no");
 	return 0;
}
