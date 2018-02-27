#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
char str[100];
int i=0;
printf("\n Enter the string");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='0'&&str[i]<='9')
{
printf("%c",str[i]);
}
}
}
