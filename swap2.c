#include<stdio.h>
void main()
{
int num1,num2,temp;
printf("\n Enter the 2 numbers");
scanf("%d\t%d",&num1,&num2);
temp=num1;
num1=num2;
num2=temp;
printf("\n The swapping numbers are %d %d",num1,num2);
}
