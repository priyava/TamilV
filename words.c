#include<stdio.h>
void main()
{
char str[100];
int i=0;words=1;
printf("\n Enter the string");
gets(str);
while(str[i]!='\0')
{
if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
{
words++;
}
i++;
}
printf("\n The total words in given string is %d",words);
}
