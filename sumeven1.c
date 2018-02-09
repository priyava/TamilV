#include<stdio.h>
void main()
{
int num1,num2,sum;
printf("\n Enter the two numbers");
scanf("%d %d",&num1,&num2);
sum=num1+num2;
if(sum%2==0)
{
printf("\n Even");
}
else
{
printf("\n Not even");
}
}
