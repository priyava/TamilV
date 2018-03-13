#include<stdio.h>
void main()
{
int n,k,a[10],i,count=0;
printf("\n N=");
scanf("%d",&n);
printf("\n K=");
scanf("%d",&k);
printf("\n Enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]%2!=0)
{
count++;
}
if(count==k)
{
printf("%d odd number is %d",k,a[i]);
}
}
}
