#include<stdio.h>
void main()
{
int num1,num2,diff;
printf("\n Enter the two numbers");
scanf("%d %d",&num1,&num2);
diff=num1-num2;
if(diff%2==0)
{
printf("\n Even");
}
else
{
printf("\n odd");
}
}
