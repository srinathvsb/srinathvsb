#include <stdio.h>
int main()
{
int l,r,i,n,count=0;
scanf("%d %d",&l,&r);
for(i=l;i<=r;i++)
{
n=i*i;
if(n<=r)
{
count++;
}
}
printf("%d",count);
return 0;
}
