import java.util.*;
public class Q6 
{
    public static void main(String[] args) 
    {
      Scanner input=new Scanner(System.in);
      int n=input.nextInt();
      int m=input.nextInt();
      String[][] s1 = new String[2][n] ;
      String [] s2=new String [m];
      for(int i=0;i<n;i++)
      {
      s1[0][i]=input.next();
      s1[1][i]=input.next();
      }
      for(int i=0;i<m;i++)
          s2[i]=input.next();
      for(int i=0;i<m;i++)
      {
         for(int j=0;j<n;j++)
         {
             if(s2[i].equals(s1[0][j]))
             {
                 System.out.print(s1[1][j]+" kachal!");
                 break;
             }
                 System.out.print((j==n-1)? "kachal!" : "");
         }
         System.out.print(" ");
      }
    }
}
