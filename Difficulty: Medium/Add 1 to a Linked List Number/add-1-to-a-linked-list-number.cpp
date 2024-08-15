//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
  Node* addingOne(Node* head){
      if(head->next==NULL){
             
             head->data +=1;
             return head;
             
         }
         Node *temp=addingOne(head->next);

     // if the last data is 10 then add carry 1 to the second last data and makes last data is 0
         if(temp->data>9){
             head->data +=1;
             temp->data=0;
         }
         return head;
  }
    Node* addOne(Node* head) {
        Node* ptr=addingOne(head);

//If the first node data is 10 then we have to break that node into two nodes first node denotes 1 and the other node denotes 0
        if(ptr->data==10){
            Node* curr=new Node(1);

            curr->data=curr->data%10;
            curr->next=ptr;
            ptr=curr;
        }
        return ptr;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends