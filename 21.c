include<stdio.h>
int main()
{int n,p=1,d,sum=0,a;
printf("Enter n and d values");
scanf("%d %d ",&n,&d);
for(a=1;a<=n;a++)
{sum=sum+p;
p=p+d;}
printf("\n%d",sum);
return 0;
}
