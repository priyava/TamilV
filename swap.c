#include<stdio.h>
void main()
{
int num1,num2,temp;;
printf("\n Enter the two numbers");
scanf("%d %d",&num1,&num2);
temp=num1;
num1=num2;num2=temp;
printf("\n The swapping number is %d %d",num1,num2);
}
