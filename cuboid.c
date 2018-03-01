#include<stdio.h>
int area(int l,int w,int h);
int volume(int l,int w,int h);
int a,vol;
void main()
{
int l,w,h;
printf("\n Enter the length,width,height");
scanf("%d\t%d\t%d",&l,&w,&h);
area(l,w,h);
printf("\n AREA=%d",a);
volume(l,w,h);
printf("\n VOLUME=%d",vol);
}
int area(int l,int w,int h)
{
a=(2*(l*w))+(2*(w*h))+(2*(l*h));
return(a);
}
int volume(int l,int w,int h)
{
vol=l*w*h;
return(vol);
}
