import java.util.Scanner;
public class Q1App 
{
    public static void main(String[] args) 
    {
      Scanner input=new Scanner(System.in);
      int a,b,l;
      a=input.nextInt();
      b=input.nextInt();
      l=input.nextInt();
      if(l%2==0)
          System.out.print((a+b)*l/2);
      else
            System.out.print(a+(a+b)*(l-1)/2);

    }
    
}
