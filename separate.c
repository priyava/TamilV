#include "stdio.h"
#include<string.h>
void main()
{
 char str[100];
 int i;
 printf("\n Enter the string");
 scanf("%s",str);
 for(i=0;str[i]!='\0';i++)
 {
 if(i%2==0)
 {
 printf("%c",str[i]);
 }
 }
 printf("\t");
 for(i=0;str[i]!='\0';i++)
 {
 if(i%2!=0)
 {
 printf("%c",str[i]);
 }
 }
 }
