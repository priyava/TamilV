#include<stdio.h>
void main()
{
int a[100],i,sum=0,n;
printf("\n Enter the range of number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
sum=sum+a[i];
}
printf("\n SUM=%d",sum);
}
