#include<stdio.h>
void main()
{
int base,exponent;
long long power=1;
printf("enter the base");
scanf("%d",&base);
printf("enter the exponent");
scanf("%d",&exponent);
for(i=1;i<=exponent;i++)
{
power=power*base;
}
printf("%d ^ %d=%lld",base,exponent,power);
}
