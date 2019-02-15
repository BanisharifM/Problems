import java.util.Scanner;
public class Q5 
{
    public static void main(String[] args) 
    {
      Scanner input=new Scanner(System.in);
      //Scanner input1=new Scanner(System.in);
      int n=input.nextInt();
      String s=input.next();
      for(int i=0;i<n;i++)
          System.out.print("copy of ");
      System.out.println(s);
    } 
}
