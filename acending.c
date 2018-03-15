#include<stdio.h>
void main()
{
int num,a[100],i,j,count=0;
printf("Enter the nuumber:");
scanf("%d",&num);
printf("\n enter the elements");
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
count++;
a[i]=a[i]+a[j];
a[j]=a[i]-a[j];
a[i]=a[i]-a[j];
}
}
}
printf("The no. of changes is: %d",count);
}
