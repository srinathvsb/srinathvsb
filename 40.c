#include<stdio.h>
int main()
{
int m, b, t1 = 0, t2 = 1, nextTerm;
printf("Enter the number of terms: ");
scanf("%d", &b);
printf("Fibonacci Series: ");
for (m=1;m<=b;++m)
{
printf("%d,",t1);
nextTerm = t1 + t2;
t1 =t2;
t2=nextTerm;
}
return 0;
}
