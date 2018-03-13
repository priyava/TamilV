#include<stdio.h>
void main()
{
int n,k,a[10],i,temp,j;
printf("\n N=");
scanf("%d",&n);
printf("\n K=");
scanf("%d",&k);
printf("\n Enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
if(i==k)
printf("%d",a[i]);
}
}
