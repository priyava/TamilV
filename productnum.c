#include<stdio.h>
void main()
{
int n,rev,rem=0,product=1;
printf("\n Enter the number");
scanf("%d",&num);
while(n!=0)
{
rem=num%10;
product=product*rem;
n=n/10;
}
printf("PRODUCT VALUE =%d",product);
}
