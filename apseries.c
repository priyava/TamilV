#include<stdio.h>
void main()
{
int a,b,c,sum=0,i;
printf("\n Enter the first term of series A=");
scanf("%d",&a);
printf("\n Difference between elements B=");
scanf("%d",&b);
printf("\n Nnmber of element in series C=");
scanf("%d",&c);
for(i=a;i<=c;i=i+b)
{
sum=sum+i;
}
printf("\n The ap series is =%d",sum);
}
