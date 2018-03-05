#include <stdio.h>
#include<string.h>
int main() 
{	
char a[10];
int i,j,n,count=0;
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])  
{
count=1;
break;
}
else
{  
continue;
}
}
}
if(count==0)
{
printf("yes..isogram");
}
else
{
printf("no");
return 0;
}
