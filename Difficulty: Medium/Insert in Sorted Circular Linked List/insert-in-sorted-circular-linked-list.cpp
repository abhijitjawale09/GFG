/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // code here
       Node* newNode = new Node(data);

        // Case 1: Empty list
        if (head == nullptr) {
            return newNode;
        }

        Node* curr = head;

        // Case 2: Inserting before head (i.e., new smallest value)
        if (data <= head->data) {
            // Find the last node (tail)
            while (curr->next != head) {
                curr = curr->next;
            }
            curr->next = newNode;
            newNode->next = head;
            return newNode; // new head
        }

        // Case 3: Inserting somewhere after head
        while (curr->next != head && curr->next->data < data) {
            curr = curr->next;
        }

        newNode->next = curr->next;
        curr->next = newNode;

        return head;
            
        
    }
};