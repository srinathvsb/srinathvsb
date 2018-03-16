#include <stdio.h>
int main() 
{
int n,k,i,j,a[10],temp;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
if(i==k-1)
{
printf("%d is the %dth smallest number",a[i],k);
break;
}
}
return 0;
}
