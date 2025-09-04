/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    void rotate(Node* ff , Node* ss) {
        int tempdata = ff->data;
        ff->data = ss->data;
        ss->data = tempdata;
    }
    
    Node* reverseKGroup(Node* head, int k) {
        if(!head || k <= 1) return head;

        int n = 0;
        Node* temp = head;
        while(temp) {
            n++;
            temp = temp->next;
        }

        Node* start = head;
        for(int gr = 0; gr < n; gr += k) {
            vector<Node*> group;
            Node* curr = start;
            for(int cnt = 0; cnt < k && curr; cnt++) {
                group.push_back(curr);
                curr = curr->next;
            }

            int m = group.size();
            for(int i = 0; i < m/2; i++) {
                rotate(group[i], group[m - i - 1]);
            }

            start = curr;
            if(!start) break;
        }

        return head;
    }
};
