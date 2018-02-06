#include<stdio.h>
void main()
{
int num,i;
printf("\n Enter the number");
scanf("%d",&num);
while(num!=0)
{
if(num%2==0)
{
printf("%d",num);
break;
}
num--;
}
}
