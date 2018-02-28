#include<stdio.h>
#include<string.h>
void main()
{
char b[100];
int i,count=0;;
printf("Enter the string:");
gets(b);
for(i=0;i!=strlen(b);i++)
{
if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
count++;
}
if(count==0)
printf("Vowel is not present");
else
printf("Vowel is present");
}
