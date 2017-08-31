#include<stdio.h>
void main()
{
int n,i;
int sum=0;
printf("\n Enter the range of number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("\n The sum of n number is %d",sum);
}
