import java.util.Scanner;
public class JavaApplication14 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        String s=input.next();
        int m=1;
        for(int i=0;i<s.length();i++)
        {
            char x=s.charAt(i);
            if(x=='T'||x=='D'||x=='L'||x=='F')
               m*=2;
        }
        System.out.println(m);
    }
}
