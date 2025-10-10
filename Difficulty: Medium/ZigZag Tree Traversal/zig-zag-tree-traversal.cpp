class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        vector<int> ans;
        if(!root) return ans; 
        
        queue<Node*> q;
        q.push(root);
        
        int leftToRight = 1;
        
        while(!q.empty()) {
            int sz = q.size();
            vector<int> tmp;
            
            for(int i = 0; i < sz; i++) {
                Node* node = q.front();
                q.pop();
                
                tmp.push_back(node->data);
                

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }


            if(leftToRight == 0) {
                reverse(tmp.begin(), tmp.end());
            }
            

            ans.insert(ans.end(), tmp.begin(), tmp.end());
            

            leftToRight = 1 - leftToRight;
        }
        
        return ans;
    }
};
