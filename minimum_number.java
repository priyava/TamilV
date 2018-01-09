import java.util.*;
class minimum_number
{
public static void main(String[]agrs)
{
int min,i;
int arr[]={10,20,30,40,50};
min=arr[0];
for(i=0;i<arr.length;i++)
{
if(arr[i]<min)
{
min=arr[i];
}
}
System.out.println("tne minimum element is"+min);
}
}
