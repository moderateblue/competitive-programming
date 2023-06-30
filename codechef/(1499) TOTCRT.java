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
	        int ps = Integer.parseInt(in.next());
	        int cnt = ps * 3;
	        HashMap<String, Integer> solutions = new HashMap<>();
	        
	        for (int i = 0; i < cnt; i++) {
	            String p = in.next();
	            int noa = Integer.parseInt(in.next());
	            if (!solutions.containsKey(p)) {
	                solutions.put(p, noa);
	            } else {
	                solutions.put(p, solutions.get(p) + noa);
	            }
	        }
	        
	        Object[] count = solutions.values().toArray();
	        Arrays.sort(count);
	        for(int i = 0; i < solutions.size(); i++) {
	            System.out.print(count[i] + " ");
	        }
	        System.out.println();
	    }
	}
}
