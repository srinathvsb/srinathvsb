#include<stdio.h>
int main()
{
char  s[100];
int k,i;
printf("enter the string");
scanf("%s",&s);
printf("enter the number");
scanf(" %d",&k);
for(i=0;i<k;i++)
{
printf("%s\n",s);
}
return 0;
}
