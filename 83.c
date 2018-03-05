#include<stdio.h>
int main(void)
{
long int a,b,div,mod,n;
scanf("%d",&n);
switch(n)
{
case 1:
scanf("%ld / %ld",&a,&b);
printf("%ld",a/b);
break;
case 2:
scanf("%ld % %ld",&a,&b);
printf("%ld",(a%b));
break;
}
return 0;
}
