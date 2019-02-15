import java.util.Scanner;
public class Q13 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int a[]=new int[n];
        int max=0;
        for(int i=0;i<n;i++)
        {  
          String s=input.next();
          int l=s.length();
          a[i]=l;
          for(int j=0;j<l;j++)
          {
            for(int k=j+1;k<l;k++)
            {
              char x1=s.charAt(j);
              char x2=s.charAt(k);
              if(x1==x2)
              {
               a[i]--;
               break;
              }
            }
          }
          if(a[i]>max)
              max=a[i];
        }
        System.out.print(max);
    }
    
}
