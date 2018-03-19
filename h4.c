#include <stdio.h>
int main(void) 
{
int i,n,j,count;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
count=0;
for(j=0;j<n;j++)
{
if(a[i]==a[j])
count++;
}
if(count==1)
printf("%d",a[i]);
}
return 0;
}
