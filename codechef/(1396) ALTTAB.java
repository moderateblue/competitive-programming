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
	    int t = Integer.parseInt(in.nextLine());
	    
	    ArrayList<String> arr = new ArrayList<>();
	    HashSet<String> uni = new HashSet<>();
	    
	    while(t-->0) {
	        arr.add(0, in.nextLine());
	    }
	    
	    for (int i = 0; i < arr.size(); i++) {
	        if (!uni.contains(arr.get(i))) {
	            System.out.print(arr.get(i).substring(arr.get(i).length() - 2));
	            uni.add(arr.get(i));
	        }
	    }
	}
}
