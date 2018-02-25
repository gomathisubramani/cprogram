#include<stdio.h>
void main()
{
int b[20],n,k,i;
printf("Enter the number:");
scanf("%d %d",&n,&k);
printf("Enter %d values:",n);
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
  if(b[i]==k)
  {
    printf("%d",b[i]);
  }
}

}
