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
if(k==a[i])
{
count++;
}
}
if(count>=1)
{
printf("\nYes");
}
else
{
printf("\n No");
}
}


