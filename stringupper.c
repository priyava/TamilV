#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int i;
printf("\n Enter the string");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
if(i==0)
{
str[i]=toupper(str[i])    
}
if(str[i]==' ')
{
str[i+1]=toupper(str[i+1]);
}
}
printf("%s",str);
}
