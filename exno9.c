#include<stdio.h>
void main()
{
	int num1,num2,i,j,sum=0;
	scanf("%d",&num1);
	scanf("%d",&num2);
	for(i=1;i<=num1;i++)
	{
		printf("%d\t",i);
	}
	for(j=1;j<=num2;j++)
	{
		while(num2>num1)
		continue;
		sum=sum+j;
	}
printf("\n\n%d",sum);
}
