#include<stdio.h>
void main()
{
int a,b c;
printf("\n Enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
if((a>>b)&&(a>>c))
{
printf("\n The largest value is%d",a);
}
else if(b>>c)
{
printf("\n The largest value is%d",b);
}
else
{
printf("\n The largest value is%d",c);
}
}
