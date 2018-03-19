#include<stdio.h>
int main()
{
int a[100],i,j,k=0,n=0,y=0,g=0,count=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
k=a[i];
for(j=0;j<n;j++)
{
y=a[j];
g=k+y;
if(g==0)
{
printf("%d + %d =0",a[i],a[j]);
printf("\n");
count++;
}
}
if(count==1)
{
break;
}
}
return 0;
}
