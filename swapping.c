#include<stdio.h>
#include<string.h>
void main()
{
int i,len;  
char str[100],c;
printf("\n enter the string");
scanf("%s",&str);
len=strlen(str);
for(i=0;i<len-1;i++)
{
if(i%2==0)
{
c=str[i];     
str[i]=str[i+1];
str[i+1]=c;
}
}
printf("\nSwapped string is %s",str);
}
