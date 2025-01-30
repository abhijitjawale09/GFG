//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.lang.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while (t-- > 0) {
            int n = Integer.parseInt(in.readLine());

            Solution ob = new Solution();
            ArrayList<ArrayList<Integer>> ans = ob.nQueen(n);
            if (ans.size() == 0)
                System.out.println("-1");
            else {
                ans.sort((list1, list2) -> {
                    int size = Math.min(list1.size(), list2.size());
                    for (int i = 0; i < size; i++) {
                        if (!list1.get(i).equals(list2.get(i))) {
                            return list1.get(i) - list2.get(i);
                        }
                    }
                    return list1.size() - list2.size();
                });

                for (int i = 0; i < ans.size(); i++) {
                    System.out.print("[");
                    for (int j = 0; j < ans.get(i).size(); j++)
                        System.out.print(ans.get(i).get(j) + " ");
                    System.out.print("] ");
                }
                System.out.println();
            }

            System.out.println("~");
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    public ArrayList<ArrayList<Integer>> nQueen(int n) {
        // code here
        boolean[] col = new boolean[n];
        boolean[] ndiag =new boolean[2*n - 1];
        boolean[] rdiag = new boolean[2*n - 1];
        
        ArrayList<ArrayList<Integer>> res = new ArrayList<>();

        
        ArrayList<Integer> temp = new ArrayList<>();
        
        solve(n , 0, col , ndiag , rdiag , res , temp);
        
        return res;
    }
    
    static void solve(int n, int currR, boolean[] col, boolean[] ndiag, boolean[] rdiag, ArrayList<ArrayList<Integer>> res, ArrayList<Integer> temp) {
        if(currR == n){
            res.add(new ArrayList<>(temp));
            return;
        }
        
        for(int i = 0; i < n; i++) {
            if(col[i] ==false && ndiag[currR +i] == false  && rdiag[currR-i+n-1]== false) {
                temp.add(i+1);
                col[i] = true;
                ndiag[currR+i] = true;
                rdiag[currR-i+n-1] = true;
                
                solve(n , currR + 1, col , ndiag , rdiag , res , temp);
                col[i] = false;
                ndiag[currR + i] = false;
                rdiag[currR - i + n - 1] = false;
                temp.remove(temp.size() - 1);
            }
        }
    }
}