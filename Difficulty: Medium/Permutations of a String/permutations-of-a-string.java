//{ Driver Code Starts
import java.io.*;
import java.lang.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);
        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            String S = br.readLine().trim();
            Solution obj = new Solution();
            ArrayList<String> ans = obj.findPermutation(S);
            Collections.sort(ans);
            for (int i = 0; i < ans.size(); i++) {
                out.print(ans.get(i) + " ");
            }
            out.println();

            out.println("~");
        }
        out.close();
    }
}

// } Driver Code Ends


class Solution {
    public ArrayList<String> findPermutation(String s) {
        // Code hereoo
        HashSet<String> set = new HashSet<>();
        
        boolean[] visited = new boolean[s.length()];
        
        
        permute(s , set , "", visited);
        
        return new ArrayList(set);
        
    }
    
    static void permute(String s , HashSet<String> set , String curr , boolean[] visited ) {
        if(curr.length() == s.length()) {
            set.add(curr);
            return;
        }
        
        for(int i = 0; i < s.length(); i++) {
            if(!visited[i]) {
                visited[i] = true;
                permute(s , set , curr + s.charAt(i) , visited);
                visited[i] = false;
            }
        }
    }
    
    
}