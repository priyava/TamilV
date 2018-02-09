#include<stdio.h>
#include<math.h>
void main()
{
int num,power,i;
printf("\n Enter the number");
scanf("%d",&num);
for(i=2;i<num;i++)
{
power=pow(2,.i);
if(power>num)
{
printf("%d",power);
break;
}
}
}
