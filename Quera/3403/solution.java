import java.util.*;
public class Q7 
{
    public static void main(String[] args) 
    {
        Scanner input =new Scanner(System.in);
        double a[]=new double[4];
        a[0]=input.nextByte();
        double sum=a[0],min=a[0],max=a[0],prime=a[0];
        for(int i=1;i<4;i++)
        {
         a[i]=input.nextByte();
         sum+=a[i];
         prime*=a[i];
         if(a[i]<min) min=a[i];
         if(a[i]>max) max=a[i];
        }
        System.out.format("Sum : %.6f\n",sum);
        System.out.format("Average : %.6f\n",sum/4);
        System.out.format("Product : %.6f\n",prime);
        System.out.format("MAX : %.6f\n",max);
        System.out.format("MIN : %.6f",min);        
    }
    
}
