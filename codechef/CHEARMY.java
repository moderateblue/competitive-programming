import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in = new Scanner(System.in);
		int cases = in.nextInt();
		
		for (int c = 0; c < cases; c++) {
		    long k = in.nextLong() - 1;
		    String kS = String.valueOf(k);
		    long kSLen = kS.length();
		    //System.out.println("init_len = " + kSLen);
		    double kD = (double) k;
		    
		    while (kD / Math.pow(5, kSLen + 1) > 1) {
		        kSLen++;
		    }
		    
		    //System.out.println("final_len = " + kSLen);
		    
		    long out = 0;
		    
		    for (long i = kSLen; i >= 1; i--) {
		        //System.out.println("i = " + i);
		        long div = k / (long) Math.pow(5, i);
		        //System.out.println("div = " + div);
		        out += (long) Math.pow(10, i) * 2 * div;
		        //System.out.println("out = " + out);
		        k = k % (long) Math.pow(5, i);
		        //System.out.println("k = " + k);
		    }
		    out += k * 2;
		    
		    System.out.println(out);
		}
	}
}
