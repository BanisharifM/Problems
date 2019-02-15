import java.util.Scanner;
public class Q17 
{
public static void main(String[] args) 
{
    Scanner input=new Scanner(System.in);
    int p=input.nextInt();
    int d=input.nextInt();
    int k=d;
    while(true)
    {
        if(d%p>=0&&d%p<=p/2)
            break;
        else
            d+=k;
    }
    System.out.println(d);
}
    
}
