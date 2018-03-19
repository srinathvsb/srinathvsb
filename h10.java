import java.util.*;
public class Subsetarray{
 public.static void main(String[] args)
 {
Scanner sc=new Scanner(System.in);
String s1[]=sc.nextLine().split(" ");
String s2[]=sc.nextLine().split(" ");
int c=0;
for(int j=0;j<s1.length;j++)
{
for(int i=0;i<s2.length;i++)
{
if(s1[j].equals(s2[i]))
c++;	
}
}
if(c==s1.length)
{
System.out.print("true");
}
else
System.out.println("False");
}
}
