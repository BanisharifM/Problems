import java.util.*;
public class Q8 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        int n,m,d=0;
        String s;
        n=input.nextInt();
        m=input.nextInt();
        for(int i=0;i<n;i++)
        {
          s=input.next();
          int l=s.length();
          for(int j=0;j<l;j++)
          {
              char x=s.charAt(j);
              if(x=='*') d++;
          }
        }
        System.out.println(d);
    }
    
}
