#include<stdio.h>
#include<string.h>
void main()
{
char str1[100],str2[100];
int i,len1,len2,count=0;
printf("\n Enter the string1");
scanf("%s",str1);
printf("\n Enter the string2");
scanf("%s",str2);
len1=strlen(str1);
len2=strlen(str2);
if(len1==len2)
{
for(i=0;str1[i]!='\0';i++)
{
if(str1[i]!=str2[i])
{
count++;
}
}
}
if(count==1)
{
printf("Yes");
}
else
{
printf("no");
}
}
