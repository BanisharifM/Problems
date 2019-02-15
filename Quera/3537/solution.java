import java.util.Scanner;
public class WowApp 
{
    public static void main(String[] args) 
    {
      Scanner input =new Scanner(System.in);
      int n=input.nextInt();
      System.out.print("W");
      for(int i=0;i<n;i++)
          System.out.print("o");
      System.out.print("w!");
    }
}
