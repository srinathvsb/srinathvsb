#include <stdio.h>
int main()
{
int n,rev=0,rem=0;
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
rev=(rev*10)+rem;
n=n/10;
}
n=rev;
rev=0;
rem=0;
while(n!=0)
{
rem=n%10;
if(rem%2==1)
{
printf("%d ",rem); 
}
n=n/10;
}
return 0;
}
