#include<stdio.h>
int main()
{
int a,b;
printf("\n Enter the numbers:");
scanf("%d %d",&a,&b);
swap(a,b);
return 0;
}
void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("After swapping:%d %d",a,b);
}
