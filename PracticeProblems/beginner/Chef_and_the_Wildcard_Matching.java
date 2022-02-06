import java.util.*;

class tmp
{
	public static void main(String[] args)
	{
		 Scanner sc=new Scanner(System.in);
		//syatem.in is a standard input stream
		//system.out is a standard output stream
		//int a=sc.nextInt();
		//float b=sc.nextFloat();
		//double d=sc.nextDouble();
		//byte bt=sc.nextByte();
		//String s=sc.nextLine();
		//boolean bb=sc.nextBoolean();
		//long l=sc.nextLong();
		//short s=sc.nextLong();
		//datatype arrayname[]=new datatype[size];
	    //int a[]=new int[n];
		//for(int i=0;i<n;++i)
		//		{
		//			a[i]=sc.nextInt();
		//		}

		/* code here */
		int t=sc.nextInt();
		for(int ii=0;ii<t;++ii){
		String a[]=new String[2];
		for(int i=0;i<2;++i)
		{
			a[i]=sc.nextLine();
		}	
		//System.out.println(a[0]);
		//System.out.println(a[1]);
		//System.out.println(a[2]);
		String s1=a[0];
		String s2=a[1];
		//System.out.println(s1);
		//System.out.println(s2);
		int n=s1.length();
		//System.out.println(n);
		int f=1;
		for(int i=0;i<n;++i)
		{
			if(s1.charAt(i)==s2.charAt(i))
			{
				continue;
			}
			else if(s1.charAt(i)=='?' || s2.charAt(i)=='?')
			{
				continue;
			}
			else
			{
				System.out.println("No");
				f=0;
				break;
			}
		}
		if(f==1)
		{
			System.out.println("Yes");
		}
	}

	}
}