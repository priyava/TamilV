#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int i,len;
printf("\n Enter the string");
scanf("%s",&str);
len=strlen(str);
for(i=0;i<len-1;i++)
{
if(i==len/2)
{
str[i]='*';
}
}
printf("%s",str);
}
