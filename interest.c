#include<stdio.h>
void main()
{
int principal,rate,time,interest;
printf("\n Principal=");
scanf("%d",&principal);
printf("\n Time=");
scanf("%d",&time);
printf("\n Rate=");
scanf("%d",&rate);
interest=(principal*rate*time)/100;
printf("\n TOTAL INTEREST IS=%d",interest);
}
