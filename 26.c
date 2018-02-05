#include<stdio.h>
int main()
{
int i,j,n,a[n],sort,count=1;
printf("\n Enter the number:");
scanf("%d",&n);
printf("\n enter the array of numbers:");
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
sort=a[i];
a[i]=a[j];
a[j]=sort;
}
}
count++;
}
printf("\n Sorted array is: %d",sort);
return 0;
}
