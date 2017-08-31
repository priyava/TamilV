#include<stdio.h>
void main()
{
int num;
printf("\n Enter the number");
scanf("%d",&num);
if(num==0)
{
printf("\n The given number is zero");
}
else if(num>0)
{
printf("\n The given number is positive");
}
else
{
printf("\n The given number is negative");
}
}
