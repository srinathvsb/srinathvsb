#include<stdio.h>
#include<conio.h>
void main()
{
char s1[100],s2[100];
int res;
clrscr();
printf("Enter S1 and S2:");
gets(s1);
gets(s2);
res=strcmp(s1,s2);
if(res==0)
printf("Strings are equal");
else
printf("Strings are not equal");
getch();
}
int strcmp(char *s1,char *s2)
{
int i=0;
while(s1[i]!='\0'||s2[i]!='\0')
{
if(s1[i]!=s2[i])
return (s2[i]-s1[i]);
i++;
}
return 0;
}
