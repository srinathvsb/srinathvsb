#include <stdio.h>
int main() 
{
int n,rev=0,rem;
scanf("%d",&n);
while(n!='\0')
{
rem=n%10;
rev=(rev*10)+rem;
n=n/10;
}
n=rev;
while(n!='\0')
{
rem=n%10;
printf("%d ",rem);
n=n/10;
}
return 0;
}
