#include<stdio.h>
#include<string.h>
int main()
{
int a,b=0,i;
char s[1000];
gets(s);
for(i=0;s[i]!=NULL;i++)
{
if(s[i]=='.')
b++;
}
printf("%d",b);
return 0;
}
