#include<stdio.h>
int main()
{
int arr[10],i,n,minnum,maxnum,temp;
printf("\n Enter the number of array element");
scanf("%d",&n);
printf("The array elements are");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
temp=arr[0];
for(i=0;i<n;i++)
{
if(arr[i]>=temp)
{
maxnum=arr[i];
temp=arr[i];
}
else
{
minnum=arr[i];
}
temp=arr[i];
}
printf("\n the maximumnumber is %d",maxnum);
printf("\n the minimum number is %d",minnum);
return 0;
}
