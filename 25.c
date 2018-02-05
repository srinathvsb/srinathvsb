#include<stdio.h>
int main()
{
int N,i,j,temp;
scanf("%d",&N);
printf("Input\n %d",N);
int a[N];
for(i=1;i<=N;i++)
{
scanf("%d",&a[i]);	
}
for(i=1;i<=N;i++)
{
for(j=i+1;j<=N;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;}
}
}
printf("\n Output\n %d",a[(N/2+1)]);
return 0;
}
