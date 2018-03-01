#include<stdio.h>
void main()
{
int n,i;
printf("\n enter the number");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
if(n%i==0)
{
break;
}
if(n!=i)
{
printf("\n Composite");
}
}
}
