#include<stdio.h>
void main()
{
int n,res=1,rem=0;
scanf("%d",&n);
while(n!='\0')
{
rem=n%10;
res=res*rem;
n=n/10;
}
printf("%d",res);
}
