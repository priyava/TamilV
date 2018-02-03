#include<stdio.h>
void main()
{
int num1,num2,product,even;
printf("\n Enter the 2 numbers");
scanf("%d\t%d",&num1,&num2);
product=num1*num2;
if(product%2==0)
{
printf("yes");
}
else
{
printf("no");
}
}
