#include<stdio.h>
void main()
{
int n,count=0;
int i;
printf("\n Enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==0)
{
printf("The given %d number is prime",n);
}
else
{
printf("\n The given %d number is not prime",n);
}
}

