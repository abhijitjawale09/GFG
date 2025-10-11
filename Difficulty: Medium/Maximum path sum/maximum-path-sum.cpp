/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int solve(Node* root , int &maxsum) {
        if(root == NULL) {
            return 0;
        }
        
        int leftsum  = max(0 , solve(root->left , maxsum));
        int rightsum = max(0 , solve(root->right , maxsum));
        
        maxsum = max(maxsum , leftsum + rightsum + root->data);
        
        return root->data + max(leftsum , rightsum);
    }
    int findMaxSum(Node *root) {
        // code here
        int maxsum = INT_MIN;
        solve(root , maxsum);
        
        return maxsum;
    }
    
};