#include<stdio.h>
int main()
{
int rem,orgnum,num,sum=0;
cout<<"enter the positive integer";
cin>>orgnum;
num=orgnum;
while(num!=0)
{
digit=num%10;
sum+=digit*digit*digit;
num/=10;
}
if(sum==orgnum)
{
cout<<"the number is armstrong";
}
else
{
cout<<"the number is not armstrong";
}
}
