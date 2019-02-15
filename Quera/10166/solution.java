import java.util.Scanner;
public class Q15
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        String a="331122331122";
        String b="123123123123";
        String c="212321232123";
        String s1="keyvoon";
        String s2="nezam";
        String s3="shir farhad";
        int n=input.nextInt();
        String s=input.next();
        int a1=0,b1=0,c1=0;
        for(int i=0;i<n;i++)
        {
          char x1=s.charAt(i);
          char x2=a.charAt(i%12);
          char x3=b.charAt(i%12);
          char x4=c.charAt(i%12);
          if(x1==x2)
              a1++;
          if(x1==x3)
              b1++;
          if(x1==x4)
              c1++;
        }
       int g[]={c1,b1,a1};
       int k[]={2,1,0};
        for(int i=2;i>=0;i--)
        {
            for(int j=0;j<i;j++)
            {
                if(g[j]>g[j+1])
                {
                    int t=g[j];
                    g[j]=g[j+1];
                    g[j+1]=t;
                    t=k[j];
                    k[j]=k[j+1];
                    k[j+1]=t;
                } 
            }
        }
        //System.out.println(g[2]+"\t"+g[1]+"\t"+g[0]);
        int l=1;
        if(g[2]==g[1]&&g[2]!=g[0])
            l=2;
        if(g[2]==g[1]&&g[1]==g[0])
            l=3;
        System.out.println(g[2]);
        for(int i=2;i>=3-l;i--)
        {
         if(k[i]==0)
             System.out.println(s1);
         if(k[i]==1)
             System.out.println(s2);
         if(k[i]==2)
             System.out.println(s3);
        }
    }
}
