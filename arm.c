#include<stdio.h>
void main()
{
int n,r,sum=0;
int t;
printf("\n enter the number");
scanf("%d",&n);
t=n;
while(t!=0)
{
r=t%10;
sum=sum+r*r*r;
t=t/10;
}
if(n==sum)
{
printf("\n The given %d number is armstrong",n);
}
else
{
printf("\n the given %d number is not armstrong",n);
}
}
