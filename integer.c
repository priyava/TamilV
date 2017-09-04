#include<stdio.h>
int main()
{
long n=988;
int count=0;
while(n!=0)
{
n=n/10;
count=count+1;
}
printf("%d",count);
return 0;
}

