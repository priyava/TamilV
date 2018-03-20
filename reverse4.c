#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int i,len;
scanf("%s",&str);
len=strlen(str);
for(i=len-1;i>=0;i--)
{
if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u')
{
printf("%c",str[i]);
}
}
}
