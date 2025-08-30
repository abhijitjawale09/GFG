// User function template for C++

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        // code here
           int c=0;
        int n=mat.size();
        for(int i=0;i<n;i++){
            if(mat[c][i]==1)
                c=i;
        }
        
        for(int i=0;i<n;i++){
            if(mat[c][i]==1 || mat[i][c]==0){
                if(c!=i)
                    return -1;
            }
            
        }
        
        return c;
    }
};