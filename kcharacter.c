#include<stdio.h>
void main()
{
char str[1000];
int i,n;
printf("\n Enter the string");
gets(str);
printf("\n Enter the limit to print");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%c",str[i]);
}
}
