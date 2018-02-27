#include<stdio.h>
void main()
{
int n,n1,n2,i,diff;
printf("\n Enter the limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d %d",&n1,&n2);
if(n1<=n2)
{
diff=n2-n1;
printf("\n%d",diff);
}
else
{
diff=n1-n2;
printf("\n%d",diff);
}
}
}
