#include <stdio.h>
int main(void) 
{
int i,n,j,array[50],count=0;
scanf("%d %d",&n,&j);
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
if(array[i]==j)
{
count=count+1;
}
}
printf("\n%d",count);
return 0;
}
