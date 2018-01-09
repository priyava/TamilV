import java.util.*;
class largest_number
{
public static void main(String[]agrs)
int max,i;
int arr[10]={10,20,30,40,50};
max=arr[0];
for(i=0;i<arr.length;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
}
System.out.println("The largest number is",+max);
}
}
