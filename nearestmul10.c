#include <stdio.h>
int main()
{
int a;
printf("\n Enter the number");
scanf("%d",&a);
while(a%10 != 0)
{
a++;
}
printf("%d",a);
}
