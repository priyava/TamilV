#include<stdio.h>
void main()
{
int n,m,i,count;
printf("\n Enter two intervals");
scanf("%d %d",&n,&m);
printf("\n The prime numbers between two intervals %d and %d",n,m);
while(n<m)
{
 count=0;
 for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
count=1;
break;
}
}
if(count==0)
printf("%d",n);
n++;
}
}
  
