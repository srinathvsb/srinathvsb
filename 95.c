include <stdio.h>
#include<math.h>
int main()
{
float p,r,si;
int n,result;
scanf("%f %d %f",&p,&n,&r);
si=((p*n*r)/100);
result=floor(si);
printf("%d",result);
return 0;
}
