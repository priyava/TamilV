#include<stdio.h>
void main()
{
int a[10];
int i,min;
printf("\n Enter the array elements");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<10;i++)
{
if(min>a[i])
{
min=a[i];
}
}
printf("\n MINIMUM VALUE %d",min);
}
