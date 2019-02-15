import java.util.Scanner;
public class Q3App 
{
    public static void main(String[] args) 
    {
     Scanner input=new Scanner(System.in);
     int a,b,c;
     a=input.nextInt();
     b=input.nextInt();
     c=input.nextInt();
     if((a+b+c==180)&&a<180&&b<180&&c<180&&a!=0&&b!=0&&c!=0)
         System.out.print("Yes");
     else
         System.out.print("No");
    }
    
}
