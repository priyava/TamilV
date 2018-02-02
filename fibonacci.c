#include<stdio.h>
void main()
{
int a=0,b=1,c,n,i;
printf("\n Enter the range of fibonacci series");
scanf("%d",&n);
printf("\n %d %d",a,b);
for(i=1;i<n;i++)
{
c=a+b;
a=b;
b=c;
printf("\t%d",c);
}
}
