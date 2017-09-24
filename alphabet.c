#include<stdio.h>
void main()
{
char c;
printf("\n Enter the character");
scanf("%c",&c);
if((c>='a' && c<='z')||(c>='A' && c<='Z'))
{
printf("\n The given character is alphabet");
}
else
{
printf("\n The given character is not alphabet");
}
}
