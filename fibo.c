#include<stdio.h>
void main()
{
int a=0;
int b=1;
int c,i,n;
printf("\n Enter the range of number");
scanf("%d"&n);
for(i=1;i<=n;i++)
{
printf("%d",a);
c=a+b;
a=b;
b=c;
}
}
