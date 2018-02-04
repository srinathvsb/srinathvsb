#include <stdio.h>
int main()
{
int n, data = 0, remainder,value;
printf("Enter an integer: ");
scanf("%d", &n);
value = n;
while( n!=0 )
{
remainder = n%10;
data = data*10 + remainder;
n /= 10;
}
if (value ==data)
printf("%d is a palindrome.", value);
else
printf("%d is not a palindrome.",value);
return 0;
}
