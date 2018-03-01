#include<stdio.h>
void main()
{
int num,i;
printf("\n enter the number");
scanf("%d",&num);
for(i=2;i<=num;i++)
{
if(num%i==0)
{
break;
}
if(num!=i)
{
printf("\n Composite");
}
}
}
