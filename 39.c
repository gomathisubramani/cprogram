#include<stdio.h>
int main()
{
    int b[20]={1,7,8,9,5,24,67,89,18,100},i,max;
    max=b[0];
    for(i=0;i<=10;i++)
    {
    
        if(b[i]>max)
        {
            max=b[i];
        }
    }
        printf("the maximum no is %d",b[i]);
        
    return 0;
}
