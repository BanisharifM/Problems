import java.util.Scanner;
public class Q16 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        int a=input.nextInt();
        int b=input.nextInt();
        if(!(a!=0 ^a!=6))
            a=12-a;
        if(!(b!=0^ b!=30))
            b=60-b;
        System.out.format("%02d:%02d",a,b);
    }
    
}
