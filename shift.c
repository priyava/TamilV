#include<stdio.h>
void main()
{
int n,k,i,a[10],j,t;
printf("\n N=");
scanf("%d",&n);
printf("\n K=");
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<k;j++)
{
t=a[n-1];
for(i=n-2 ;i>=0;i--)
{	
a[i+1]=a[i];	
}
a[0]=t;
}
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
