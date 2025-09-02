/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* swapKth(Node* head, int k) {
        // code here
        int n = 0;
        Node* temp = head;
        while(temp != NULL) {
             n++;
             temp = temp->next;
        }
        
        if(k > n || (2*k - 1) == n) {
            return head;
        }
        Node* first = head;
        int lk = n - k + 1;
        
        for(int i = 1; i < k; i++) {
           first = first->next;
        }
        
        Node* second = head;
        for(int i = 1; i < n - k + 1; i++) {
           second = second->next;
        }
        
        int tempdata = first->data;
        first->data = second->data;
        second->data = tempdata;
        
        return head;
        
    }
};