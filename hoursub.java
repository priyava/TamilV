import java.util.*;
class hoursub
{
public static void main(String agrs[])
{
int t1,m1,t2,m2,hour1,hour2;
int sub1,sub2;
System.out.println("\n enter the first time and minutes"+t1);
System.out.println("\n Enter the second time and minutes"+t2);
hour1=t1/60;
hour2=t2/60;
m1=t1%60;
m2=t2%60;
sub1=hour1-hour2;
sub2=m1-m2;
System.out.println(" "+sub1+sub2);
}
}
