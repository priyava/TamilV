#include<stdio.h>
void main()
{
int n,div;
printf("\n Enter the number");
scanf("%d",&n);
if(n%2==0)
{
div=n/2;
printf("%d",div);
}
else
{
printf("%d",n);
}
}
