#include<stdio.h>
void main()
{
int arr[10],max,i;
printf("\n the array elaements are");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
max=arr[0];
for(i=0;i<10;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
}
printf("\n The maximum num,ber is %d",max);
}
