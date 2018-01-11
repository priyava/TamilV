import java.util.*;
public class reverse
{
public static void main(String[]args)
{
int n,rev=0;
System.out.println("Enter the number"+n);
while(n!=0)
{
n=n%10;
rev=rev*10+n;
n=n/10;
}
System.out.println("The reverse number is"+rev);
}
}
