#include<stdio.h>
#include<string.h>
int main()
{
char str[100][200],a[100];
int i,n,j;
printf("enter the no of strings");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",str[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(strlen(str[i])<strlen(str[j]))
{
strcpy(a,str[i]);
strcpy(str[i],str[j]);
strcpy(str[j],a);
}
}
}
for(i=1;i<=n;i++)
{
printf("%s\n",str[i-1]);
}
}
