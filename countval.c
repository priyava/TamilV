#include<stdio.h>
void main()
{
int num,i;
int count=0;
printf("\n Enter the number");
scanf("%d",&num);
while(num!=0)
{
num=num/10;
count++;
}
printf("\n COUNT=%d",count);
}
