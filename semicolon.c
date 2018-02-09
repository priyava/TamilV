#include<stdio.h>
void main()
{
char str[100];
int i=0;
printf("\n Enter the string");
scanf("%s",&str);
while(str[i]!='\0')
{
if(printf("%s",str))
i++;
}
}

