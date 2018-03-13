#include<stdio.h>
int main()
{
int n,k,a[10],i,count=0;
printf("\n N=");
scanf("%d",&n);
printf("\n K=");
scanf("%d",&k);
printf("\n Enter the numbers");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
if(k==a[i])
{
count++;
}
}
printf("\n repetition count=%d",count);
return 0;
}
