/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
	    int T = sc.nextInt();
	    for(int i = 0;i<T;i++)
	    {
	        int N = sc.nextInt();
	        int B = sc.nextInt();
	        int N1[] = new int[N];
	        double sum = 0;
	        for(int j = 0;j<N;j++)
	        {
	            N1[j] = sc.nextInt();
	        }
	        for(int k = 0;k<N;k++)
	        {
	            sum = sum + N1[k];
	        }
	        if(sum<=B)
	        {
	            System.out.println("YES");
	        }
	        else
	        {
	            if(sum>1000)
	            {
	                double temp = 0.1*sum;
	                sum = sum - temp;
	                if(sum<=B)
	                {
	                    System.out.println("YES");
	                }
	                else
	                {
	                    System.out.println("NO");
	                }
	            }
	            else
	            {
	                System.out.println("NO");
	            }
	        }
	        
	    }
	}
}
