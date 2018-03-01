#include<stdio.h>
void main()
{
int a[100],n,k,i;
printf("\nN=");
scanf("%d",&n);
printf("\nK=");
scanf("%d",&k);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
if(i==k)
{
printf("\n%d",a[i]);
}
}
}
