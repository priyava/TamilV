#include<stdio.h>
void main()
{
int range,i,avg,sum=0;
int arr[100];
printf("\n Enter th range");
scanf("%d",&range);
printf("\n Enter the elements");
for(i=0;i<range;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<range;i++)
{
sum=sum+arr[i];
}
avg=sum/range;
printf("\n The average number is %d",avg);
}
