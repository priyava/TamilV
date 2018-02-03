#include<stdio.h>
void main()
{
int a=0,b=1,c,n,i;
printf("\n Enter the range of series");
scanf("%d",&n);
printf("%d",b);
for(i=2;i<=n;i++)
{
c=a+b;
a=b;
b=c;
printf("\t%d",c);
}
}
