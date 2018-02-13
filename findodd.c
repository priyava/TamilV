#include<stdio.h>
void main()
{
int num,rem;
printf("\n Enter the number");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
if(rem%2!=0)
{
printf("\n%d",rem);
}
num=num/10;
}
}
