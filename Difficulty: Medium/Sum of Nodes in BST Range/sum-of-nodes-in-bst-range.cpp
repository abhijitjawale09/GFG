/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int rangesum(Node* root , int l , int r) {
        
        if(root == NULL) {
            return 0;
        }
        int rsum = 0;
        
        if(l <= root->data && root->data <= r) {
            rsum += root->data;
        }
        rsum += rangesum(root->left , l , r );
        rsum += rangesum(root->right , l , r);
        
        return rsum;
    }
    int nodeSum(Node* root, int l, int r) {
        // code here
        return rangesum(root , l , r );
    }
};
