#include<stdio.h>
void main()
{
char str[100];
int i;
printf("\n Enter the string");
scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='0'&&str[i]<='1')
{
printf("yes");
break;
}
else
{
printf("no");
break;
}
}
}
