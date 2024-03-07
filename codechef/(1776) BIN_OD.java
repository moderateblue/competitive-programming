/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static long mod = 1000000007;
    
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner in = new Scanner(System.in);
	    int t = in.nextInt();
	    
	    while(t-->0) {
	        int n = in.nextInt();
	        int q = in.nextInt();
	        
	        long[] arr = new long[n];
	        for (int i = 0; i < n; i++) {
	            arr[i] = in.nextLong();
	        }
	        
	        long[][] bit = new long[n+1][60];
	        for (long[] row: bit) Arrays.fill(row, 0);
	        for (int i = 1; i <= n; i++) {
	            long element = arr[i-1];
	            for (int j = 0; j < 60; j++) {
	                if ((element & 1) == 1) {
	                    bit[i][j] = bit[i-1][j] + 1;
	                } else {
	                    bit[i][j] = bit[i-1][j];
	                }
	                element >>= 1;
	            }
	        }
	        
	        for (int i = 0; i < q; i++) {
	            int k = in.nextInt();
	            int l1 = in.nextInt();
	            int r1 = in.nextInt();
	            int l2 = in.nextInt();
	            int r2 = in.nextInt();
	            
	            long setBits1 = bit[r1][k] - bit[l1-1][k];
	            long setBits2 = bit[r2][k] - bit[l2-1][k];
	            long unsetBits1 = r1 - l1+1 - setBits1;
	            long unsetBits2 = r2 - l2+1 - setBits2;
	            long count = setBits1 * unsetBits2 + setBits2 * unsetBits1;
	            
	            System.out.println(count);
	        }
	    }
	}
}
