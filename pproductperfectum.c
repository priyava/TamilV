#include<stdio.h>
void main()
{
int num1,num2,product,i,count=0;
printf("\n Enter the 2 numbers");
scanf("%d%d",&num1,&num2);
product=num1*num2;
for(i=1;i<=product;i++)
{
if(product==(i*i))
{
count++;
break;
}
}
if(count==1)
{
printf("\n yes");
}
else
{
printf("\nno");
}
}
