include <stdio.h>
int main(void) {
int a,f=0,s=1,count=0,t;
printf("enter number");
scanf("%d",&a);
printf("%d\t",s);
while(count<=a-2)
{
t=f+s;
f=s;
s=t;
printf("%d\t",s);
count++;
}
}
