#include<stdio.h>
#include<string.h>
void main()
{
char str1[100],str2[100];
int i,len1,len2;
printf("\n Enter the string1");
scanf("%s",str1);
printf("\n Enter the string2");
scanf("%s",str2);
len1=strlen(str1);
len2=strlen(str2);
if(len1>len2)
{
printf("\n%s",str1);
}
else
{
printf("\n%s",str2);
}
}
