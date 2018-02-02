#include<stdio.h>
#include<conio.h>
void main()
{
int n,t,r,s;
clrscr();
printf("ENTER THE NUMBER:");
scanf("%d",&n);
t=n;
s=0;
while(n>0)
{
r=n%10;
s=s+(r*r*r);
n=n/10;
}
if(t==s)
printf("\n%d is an AMSTRONG NUMBER",t);
else
printf("\n%d is not an AMSTRONG NUMBER",t)
}
