#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a,sum=0;
printf("Enter N:");
scanf("%d",&n);
while(n!=0)
{
a=n%10;
sum=sum+a;
n=n/10;
}
printf("\nThe Sum is %d",sum);
getch();
}
