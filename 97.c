#include<stdio.h>
void main()
{
int n,rev=0,rem=0;
scanf("%d",&n);
while(n!='\0')
{
rem=n%10;
rev=(rev*10)+rem;
n=n/10;
}
printf("%d",rev);
}
