#include<stdio.h>
#include<ctype.h>
void main()
{
char str[100];
int i;
printf("\n Enter the string");
scanf("%s",&str);
while(str[i]!='\0')
{
if(isalnum(str[i]))
{
printf("\n Yes");
break;
}
else
{
printf("no");
}
}
}
