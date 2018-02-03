#include<stdio.h>
void main()
{
int num,temp,sum=0,rem;
printf("\n Enter the number");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
rem=temp%10;
sum=sum+rem;
temp=temp/10;
}
printf("\n%d",sum);
}
