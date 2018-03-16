#include<stdio.h>
int main(void)
{
int l;
scanf("%d",&l);
int a[l],i,j=0,;
for(i=0;i<l;i++)
scanf("%d",&a[i]);
for(i=0;i<l;i++)
{
if(a[j]==a[i+1])
{
printf("\n%d",a[j]);
for(j=i+1;j<l;j++)
a[j]=a[j+1];
a[l]='\0';
l--;
}
j++;
}
}
