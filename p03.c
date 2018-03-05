include<stdio.h>
void main()
{
int a,b[20],rem,i=0;
scanf("%d",&a);
while(a!=0)
{
rem=a%10;
a=a/10;
b[i]=rem;
i++;
}
for(a=0;a<i;a++)
printf("%d",b[a]);
}
