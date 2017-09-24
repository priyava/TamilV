#include<stdio.h>
void main()
{
int year;
printf("\n enter the year");
scanf("%d",&year);
if(year%4==0)
{
if(year%100==0)
{
if(year%400==0)
{
printf("\n %d is leap year",year);
else
printf("\n %d is not leap year",year);
}
else
printf("\n %d is leap year",year);
}
else
printf("\n % is not leap year",year);
}
