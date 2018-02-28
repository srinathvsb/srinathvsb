#include <stdio.h>
#include<string.h>
int main()
{
char a[100];
int l,i,t;
scanf("%s",a);
l=strlen(a);
t=l/2;
if(l%2==0)
{
a[t-1]='*';
a[t]='*';
printf("%s",a);   
}
else
{
s[t]='*';
printf("%s",a);
}
return 0;
}
