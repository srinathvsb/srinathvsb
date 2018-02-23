#include<stdio.h>
int main()
{
int x,y;
printf("\n Enter the numbers:");
scanf("%d %d",&x,&y);
swap(x,y);
return 0;
}
void swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf("After swapping:%d %d",x,y);
}
