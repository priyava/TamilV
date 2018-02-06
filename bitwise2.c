#include<stdio.h>
void main()
{
int a,b;
printf("\n Enter the 2 numbers"):
scanf("%d %d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("\n swapping number is %d %d",a,b);
}
