/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
	    int T = sc.nextInt();
	    for(int t = 0;t<T;t++)
	    {
	        String p= sc.nextLine();
	        String q= sc.nextLine();
	        int na=p.length();
	        int nb=q.length();

	        String ans="";
	        int N=26;
	        int a[] = new int[N];
	        int b[] = new int[N];

	        for(int ii=0;ii<N;++ii)
	        {
	        	a[ii]=0;
	        	b[ii]=0;
	        }
	        for(int i=0;i<na;++i)
	        {
	        	if(p.charAt(i)=='a')
	        	{
	        		a[0]+=1;
	        	}
	        	else if(p.charAt(i)=='b'){
	        	    a[1]+=1;
	        	}
	        	else if(p.charAt(i)=='c'){
	        		a[2]+=1;
	        	}
	        	else if(p.charAt(i)=='d'){
	        		a[3]+=1;
	        	}
	        	else if(p.charAt(i)=='e'){
	        		a[4]+=1;
	        	}
	        	else if(p.charAt(i)=='f'){
	        		a[5]+=1;
	        	}
	        	else if(p.charAt(i)=='g'){
	        		a[6]+=1;
	        	}
	        	else if(p.charAt(i)=='h'){
	        		a[7]+=1;
	        	}
	        	else if(p.charAt(i)=='i'){
	        		a[8]+=1;
	        	}
	        	else if(p.charAt(i)=='j'){
	        		a[9]+=1;
	        	}
	        	else if(p.charAt(i)=='k'){
	        		a[10]+=1;
	        	}
	        	else if(p.charAt(i)=='l'){
	        		a[11]+=1;
	        	}
	        	else if(p.charAt(i)=='m'){
	        		a[12]+=1;
	        	}
	        	else if(p.charAt(i)=='n'){
	        		a[13]+=1;
	        	}
	        	else if(p.charAt(i)=='o'){
	        		a[14]+=1;
	        	}
	        	else if(p.charAt(i)=='p'){
	        		a[15]+=1;
	        	}
	        	else if(p.charAt(i)=='q'){
	        		a[16]+=1;
	        	}
	        	else if(p.charAt(i)=='r'){
	        		a[17]+=1;
	        	}
	        	else if(p.charAt(i)=='s'){
	        		a[18]+=1;
	        	}
	        	else if(p.charAt(i)=='t'){
	        		a[19]+=1;
	        	}
	        	else if(p.charAt(i)=='u'){
	        		a[20]+=1;
	        	}
	        	else if(p.charAt(i)=='v'){
	        		a[21]+=1;
	        	}
	        	else if(p.charAt(i)=='w'){
	        		a[22]+=1;
	        	}
	        	else if(p.charAt(i)=='x'){
	        		a[23]+=1;
	        	}
	        	else if(p.charAt(i)=='y'){
	        		a[24]+=1;
	        	}
	        	else{
	        		a[25]+=1;
	        	}
	        }
	        for(int k=0;k<nb;++k)
	        	        {
	        	        	if(q.charAt(k)=='a')
	        	        	{
	        	        		b[0]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='b'){
	        	        	    b[1]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='c'){
	        	        		b[2]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='d'){
	        	        		b[3]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='e'){
	        	        		b[4]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='f'){
	        	        		b[5]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='g'){
	        	        		b[6]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='h'){
	        	        		b[7]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='i'){
	        	        		b[8]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='j'){
	        	        		b[9]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='k'){
	        	        		b[10]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='l'){
	        	        		b[11]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='m'){
	        	        		b[12]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='n'){
	        	        		b[13]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='o'){
	        	        		b[14]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='p'){
	        	        		b[15]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='q'){
	        	        		b[16]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='r'){
	        	        		b[17]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='s'){
	        	        		b[18]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='t'){
	        	        		b[19]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='u'){
	        	        		b[20]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='v'){
	        	        		b[21]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='w'){
	        	        		b[22]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='x'){
	        	        		b[23]+=1;
	        	        	}
	        	        	else if(q.charAt(k)=='y'){
	        	        		b[24]+=1;
	        	        	}
	        	        	else{
	        	        		b[25]+=1;
	        	        	}
	        	        }

	        	        //aabc
	        	        //adef
	        	        //bc  def
	        	        //2 1 1 0 0 0...
	        	        //1 0 0 1 1 1
	        	        for(int kk=0;kk<26;++kk)
	        	        {
	        	        	System.out.print(a[kk]);
	        	        	System.out.print(" ");
	        	        }

	        	        System.out.println();
	        	         for(int jj=0;jj<26;++jj)
	        	        {
	        	        	System.out.print(b[jj]);
	        	        	System.out.print(" ");
	        	        }
	    }
	}
}
