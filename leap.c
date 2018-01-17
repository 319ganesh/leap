#include<stdio.h>
int main(void)
{
int year;
printf("\n enter the year:\n");
scanf("%d",&year);
if(year/4==0)
{
printf("leap year");
}
else
{
printf("not a leap year");
}
}
