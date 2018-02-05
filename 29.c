#include<stdio.h>
int main()
{
int time=0;
int min=0;
int hours=0;
time=640;
minutes=time%60;
hours=(time-minutes)/60;
printf("total minutes %d=%d hours and %d minutes\n",time,hours,minutes);
return(0);
}
