#include<stdio.h>
void main()
{
int num,rev,rem=0;
printf("\n Enter the number");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
rev=(rev*10)+rem;
num=num/10;
}
printf("REVERSE NUMBER =%d",rev);
}
