import java.util.Scanner;
public class JavaApplication15 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int b[]=new int[n+1];
       /* for(int i=1;i<n+1;i++)
            b[i]=0;*/
        for(int i=1;i<n+1;i++)
        {
            int x=input.nextInt();
            b[x]++;
        }
        int min=b[1],index=1;
        for(int i=2;i<n+1;i++)
        {
            if(b[i]<min&&b[i]!=0)
            {
                min=b[i];
                index=i;
            }    
        }
        System.out.println(index);
    }
    
}
