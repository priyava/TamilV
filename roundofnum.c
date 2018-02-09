#include<stdio.h>
void main()
{
float num;
int rem,temp;
printf("\n Enter the num");
scanf("%f",&num);
temp=num*10;
if(temp!=0)
{
rem=temp%10;
if(rem>=5)
{
temp=temp/10;
temp++;
printf("\n %d",temp);
}
}
}
