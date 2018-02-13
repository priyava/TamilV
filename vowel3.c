#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int i,flag;
printf("\n ENTER the string");
scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='aU'||str[i]=='U')
{
flag=0;
}
else
{
flag=1;
}
}
if(flag==0)
{
printf("\n YES");
}
else
{
printf("\n No");
}
}
