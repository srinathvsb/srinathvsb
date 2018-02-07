#include<stdio.h>
int main()        
{
int a, b, c, d, e, f, g, h, i, j, p, v, m, x, y, z, large;
clrscr();
printf(" Enter any Ten integer numbers :  ") ;
scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j) ;
x = (a > b? a : b);
y = (c > d? c : d);
z = (e > f? e : f);
p = (g > h? g : h);
v = (i > j? i : j);
m=x>y ? ( x > z ? x : z) : (y > z ? y : z) ;
large = p > v ?(p>w?p:w):(v>m?v:m) ;
printf("\n\n The largest of Ten numbers using Conditional ternary Operator is : %d", large) ;
return 0;
}
