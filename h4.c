#include <stdio.h>
int main(void) 
{
int i,k,j,count;
scanf("%d",&k);
int a[k];
for(i=0;i<k;i++)
scanf("%d",&a[i]);
for(i=0;i<k;i++)
{
count=0;
for(j=0;j<k;j++)
{
if(a[i]==a[j])
count++;
}
if(count==1)
printf("%d",a[i]);
}
return 0;
}
