import java.io.*;
import java.util.*;


public class Solution{
	
	public static void main(String args[]) throws IOException{
		
		int x, y;
		
		//BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
		BufferedReader input = new BufferedReader(new FileReader("input.txt"));
		
		String temp[] = int [2];
		
		for(temp[] = input.readLine().split(" "); temp[0] != null; ){
			
			x = Integer.parseInt(temp[0]);
			y = Integer.parseInt(temp[1]);
			System.out.println(x+y);
			
			temp[] = input.readLine().split(" ");
			
			}
		
		}
	
	}
