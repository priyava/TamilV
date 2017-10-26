#include<stdio.h>
void main()
{
int i,r,
for(i=350;i<=450;i++)
{
while(i!=0)
{
r=i%10;
d=r*r*r;
sum=sum+d;
i=i/10;
}
if(i==sum)
{
printf("\n the armstrong number is%d",i);
}
}
}


