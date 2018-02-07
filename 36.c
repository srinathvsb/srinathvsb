#include<stdio.h>
int main()
{
char a[100];
int i,b=0;
printf("\n enter the essay");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0' && a[i]>='9')
{
b++;
}
}
printf("%d",b);
return 0;
}
