#include<stdio.h>
#include<conoi.h>
void main()
{
char c;
clrscr();
printf("\n Enter the chracter");
scan("%c",c);
if(c=='a'||c=='e'||c=='i'||c=='0'||c=='u'||c=='A'||c=='E'||c=='I'||c='O'||c=='U')
{
printf("\n the given character is vowel");
}
else
{
printf("\n the given character is consonent");
}
getch();
}
