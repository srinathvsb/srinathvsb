#include <stdio.h>
int main(void) 
{
int i,n,k,array[50],flag=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
if(array[i]==k)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("\nyes");
}
else
{
printf("\nno");
}
return 0;
}
