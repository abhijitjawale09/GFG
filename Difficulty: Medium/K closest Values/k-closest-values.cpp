/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  void inorder(Node*root,vector<int>&ans)
  {
      if(root==NULL) return;
      
      inorder(root->left,ans);
      ans.push_back(root->data);
      inorder(root->right,ans);
     
  }
    vector<int> getKClosest(Node* root, int x, int k) {
        // code here
        vector<int>arr;
        inorder(root,arr);
        
        vector<int>ans;
        
        while(k--)
        {
            int mini=INT_MAX,j;
            for(int i=0;i<arr.size();i++)
            {
               if(abs(arr[i]-x)<mini){
                   mini=abs(arr[i]-x);  
                   j=i;
               }
            }
            ans.push_back(arr[j]);
            arr.erase(arr.begin() + j);
        }
        return ans;
    }
};