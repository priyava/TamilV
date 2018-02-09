#include<stdio.h>
void main()
{
int num,l,r;
printf("\n Enter the number");
scanf("%d",&num);
printf("\n Enter the range start and end");
scanf("%d %d",&l,&r);
for(i=l;i<=r;i++)
{
if(num==i)
{
printf("\n yes");
}
}
}
