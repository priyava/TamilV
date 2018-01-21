import java.util.*;
class squares
{
public static void main(String agrs[])
{
int num,rem,product,product1,product2,sum;
System.out.println("\n Enter thye number"+num);
if(num<10)
{
product=num*num;
System.out.println(" "+product);
}
while(num>10)
{
rem=num%10;
product1=rem*rem;
num=num/10;
product2=num*num;
sum=product1+product2;
System.out.println(" "+sum);
}
}
}

