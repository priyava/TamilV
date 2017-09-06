#include<stdio.h>
void main()
{
int n,i;
int sum=0;
printf("\n Enter the range of natural numbers");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("\n The sum of natural numbers are %d",sum);
}
