#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int i,c1=0;
printf("\n Enter the string");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==str[i+1])
{
c1++;
}
}
if(c1>0)
{
printf("\n Given string is not isogram");
}
else
{
printf("\n Given string isogram");
}  
}
