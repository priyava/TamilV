#include<stdio.h>
void main()
{
int n,i,fact=1;
printf("\n Enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("\n The factorial is %d",fact);
}
