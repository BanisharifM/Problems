import java.util.Scanner;
public class Q12 
{
    public static void main(String[] args) 
    {
       Scanner input=new Scanner(System.in);
       int a[]={1,1,2,2,2,8};
       int b[]=new int [6];
       for(int i=0;i<6;i++)
       {
           int x=input.nextInt();
           b[i]=a[i]-x;
       }
       for(int i=0;i<6;i++)
           System.out.println(b[i]);
    }
    
}
