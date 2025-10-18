/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    
    int len = 0, count = 0, ans = -1;
    void getlen(Node* root) {
        if(root == NULL) {
            return;
        }
        
        len++;
        getlen(root->left);
        getlen(root->right);
        
    }
    
    void inorder(Node* root) {
        if(root == NULL || ans != -1) {
            return;
        }
        inorder(root->left);
        count++;
        if(len % 2 == 0) {
            if(count == len /2) {
                ans = root->data;
            }
        }else{
            if(count == ((len + 1) / 2)) {
                ans = root->data;
            }
        }
        
        inorder(root->right);
    }
    int findMedian(Node* root) {
        // Code here
        getlen(root);
        inorder(root);
        return ans;
    }
};