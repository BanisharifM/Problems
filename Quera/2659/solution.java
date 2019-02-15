import java.util.Scanner;
public class Q14 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        String s1=input.next();
        String s2=input.next();
        int k=0;
        for(int i=0;i<n;i++)
        {
          char x1=s1.charAt(i);
          char x2=s2.charAt(i);
          if(x1!=x2)
              k++;
        }
        System.out.print(k);
    }
    
}
