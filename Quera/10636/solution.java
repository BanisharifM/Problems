import java.util.Scanner;
public class JavaApplication13 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        String s[]=new String [100];
        String s1[]=new String [100];
        int a[]=new int[100];
        int n=input.nextInt();
        for(int i=0;i<n;i++)
            a[i]=0;
        for(int i=0;i<n;i++)
        {
            s[i]=input.next();
            s1[i]=input.next();            
            //System.out.println(s[i]);
            for(int j=i-1;j>=0;j--)
            {
                if(s[i].equals(s[j]))
                {
                    a[j]++;
                    i--;
                    n--;
                    break;
                }
            }
        }
        int max=a[0];
        for(int i=1;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        System.out.println(max+1);
    }   
}
