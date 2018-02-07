#include<stdio.h>
int main()
{
int p,t;
scanf("%d",&p);
scanf("%d",&t);
printf("values before swapping %d %d",p,t);
printf("enter the value");
p=p^t;
t=p^t;
p=p^t;
printf("values after swapping %d %d",p,t);
return 0;
}
