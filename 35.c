#include<stdio.h>
int main()
{
    int i,c=0,n;
    char a[50]="hash is good boy 1234";
    for(i=0;a[i]!=0;i++)
{
    if(a[i]>='0'&&a[i]<='9')
    {
        c++;
    }
}
printf("%d",c);
return 0;
}
