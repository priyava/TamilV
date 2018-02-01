#include<stdio.h>
void main()
{
char str[100];
int count=1,int=0;
printf("\n Enter the string");
gets(str);
while(str[i]!='\0')
{
if(str[i]=='.')
{
count++;
}
i++;
}
printf("\n THE TOTAL line %d",count);
return 0;
}
