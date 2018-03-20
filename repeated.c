#include<stdio.h>
#include<string.h>
void main()
{
char str[100],c,ch;
int i,j,count=0,l=0;
scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
c=str[i];
count=0;
for(j=0;str[j]!='\0';j++)
{
if(c==str[j])
{
count++;
}
}
if(count>l)
{
ch=str[i];
}
}
printf("\n%d%c",l,ch);
}
