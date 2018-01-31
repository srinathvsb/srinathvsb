#include <stdio.h>
int main()
{
char b;
printf("Enter a character: ");
scanf("%c",&b);
if( (b>='a'&&b<='z')||(b>='A'&&b<='Z'))
printf("%c is an alphabet.",b);
else
{
printf("%c is not an alphabet.",b);
}
return 0;
}
