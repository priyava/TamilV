#include<stdio.h>
#include<string.h>
void main()
{
char str1[100];
int i;
printf("\n Enter the string");
scanf("%[^\n]s",str1);
for(i=0;str1[i]!='\0';i++)
{
if(i==0)
{
str1[i]=toupper(str1[i])    
}
if(str1[i]==' ')
{
str1[i+1]=toupper(str1[i+1]);
}
}
printf("%s",str1);
}
