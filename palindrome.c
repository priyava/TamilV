#include<stdio.h>
void main()
{
int n,r,t;
int rev=0;
printf("\n Enter the number");
scanf("%d",&n);
t=n;
while(n!=0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
if(rev==n)
{
printf("%d is palindrome",n);
}
else
{
printf("%d is not palindrome",n);
}
}
