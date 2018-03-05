#include<stdio.h>
void main()
{
int i,j,f,n,p,c=0;
scanf("%i %i",&n,&p);
for(i=n;i<=p;++i)
{
f=0;
for(j=2;j<=i/2;j++)
{
if((i % j) == 0)
{
f++;
break;
}
}
if(f==0)
c++;
}
printf("%i",c);
}
