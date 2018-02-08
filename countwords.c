#include<stdio.h>
void main()
{
char str[100];
int i=0,words=1;
printf("\n Enter the string");
gets(str);
while(str[i]!='\0')
{
if(str[i]==' '||str[i]=='\t'||str[i]=='\n')
{
words++;
}
i++;
}
printf("\n number words %d",words);
}
