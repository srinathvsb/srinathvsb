#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int a;
printf("enter the string");
gets(str);
a=strlen(str);
printf("%d",a);
return 0;
}
