#include <stdio.h>
int main()
{
int n11, n2;
scanf(" %d \t  %d\n", &n11, &n2);
n11 = n11 ^ n2;
n2 = n11 ^ n2;
n11 = n11 ^ n2;
printf(" %d \t %d\n", n11, n2);
return 0;
}
