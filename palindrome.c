#include<stdio.h>
int main()
{
int n,num,digit,rev=0;
cout<<"enter the positive number";
cin>>num;
n=num;
do
{
digit=n/10;
rev=(rev*10)+digit;
num=num/10;
}while(n!=0);
cout<<"the reverse number is"<<rev<<end1;
if(n==rev)
cout<<"the number is a palindrome";
else
cout<<"the number is not palindrome";
}
