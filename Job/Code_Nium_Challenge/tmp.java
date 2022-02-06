import java.util.Scanner;
 
public class tmp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a,b;
        String[] input=new String[2];
        input = sc.nextLine().split(" ");
        a=input[0];
        b=input[1];
        //= scanner.nextLine();
        //System.out.println("Your string: " + a);
        //String b= scanner.nextLine();
        //System.out.print(a);
        
        //System.out.print(" ");
        //System.out.print(b);
        for(int i=0;i<a.length();++i)
        {
        	System.out.println(a.charAt(i));
        }
        
        
    }
}
