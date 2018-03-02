#include<stdio.h>
void main()
{
int x,y;
scanf("%d%d",&x,&y);
printf("The product is:%d",x*y);
if(x/y==1)
printf("Perfect Square");
else
printf("Not perfect square");
}
