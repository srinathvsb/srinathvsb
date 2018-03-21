#include<stdio.h>
#include<string.h>
int main(void)
{
char s1[100],s2[100];
int i,l,j;
scanf("%[^\n]s",s1);
l=strlen(s1);
for(i=0;i<l;i++)
{
s2[i]=s1[l-i-1];
}
s2[l]='\0';
printf("%s\n",s2);
for(i=0;i<l;i++)
{
if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u'||s2[i]=='A'||s2[i]=='E'||s2[i]=='I'||s2[i]=='O'||s2[i]=='U')
{
for(j=i;j<l;j++)
{
s2[j]=s2[j+1];
}
l--;
i--;
}
}
printf("%s",s2);
return 0;
}
