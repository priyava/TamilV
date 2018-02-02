#include<stdio.h>
void main()
{
int arr[10],max,i;
printf("\n Enter the elements");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
max=arr[0];
for(i=0;i<10;i++)
{
if(max<arr[i])
{
max=arr[i];
}
}
printf("\n The maximum element is %d",max);
}
