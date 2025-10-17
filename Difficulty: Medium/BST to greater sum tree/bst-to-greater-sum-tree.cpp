/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};*/

class Solution {
  public:
    int sum = 0;
    void travel(Node* root) {
        if(root == NULL) {
            return ;
        }
        
        travel(root->right);
        int temp = root->data;
        root->data = sum;
        sum += temp;
        travel(root->left);
        
    }
    void transformTree(Node *root) {
        // code here
        sum = 0;
        travel(root);
    }
};