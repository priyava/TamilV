#include<stdio.h>
int main()
{
char str[100];
int count=0,i=0;
printf("\n Enter the string");
gets(str);
while(str[i]!='\0')
{
if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
{
count++;
}
i++;
}
printf("\n THE TOTAL WHITE SPACE %d",count);
return 0;
}

