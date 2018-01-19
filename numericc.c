#include<stdio.h>
int main()
{
char a;
printf("\n Enter the character");
scanf("%s",&a);
if(a>=0&&a<=9)
{
printf("\n The given character is nyumeric");
}
else
{
printf("\n The given character is not numeric");
}
return 0;
}
