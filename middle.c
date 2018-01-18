#include<stdio.h>
int main()
{
int arr[100];
int i,j,temp,n;
printf("Enter number of elements in array");
scanf("%d",&n);
for(i=0;i<n-1;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("The middle element is %d",arr[n/2]);
return 0;
}
