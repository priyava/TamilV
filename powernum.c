#include<stdio.h>
#include<math.h>
void main()
{
int num,i,power,count=0;
printf("\n Enter the number");
scanf("%d",&num);
for(i=1;i<num;i++)
{
power=pow(2,i);
if(power==num)
{
count++;
break;
}
}
if(count==1)
{
printf("\n yes");
}
else
{
printf("\n no"); 
}
}
