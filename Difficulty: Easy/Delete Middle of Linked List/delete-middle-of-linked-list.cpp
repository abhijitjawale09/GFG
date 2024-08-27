//{ Driver Code Starts
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


// } Driver Code Ends
/* Link list Node:

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

// Deletes middle of linked list and returns head of the modified list
class Solution {
  public:
    Node* deleteMid(Node* head) {
        // Your Code Here
        if(head == NULL || head->next == NULL) {
            return NULL;
        }
        Node* temp = head;
        Node* tempp = head;
        Node* prev = NULL;
        while(tempp != NULL && tempp->next!= NULL) {
            prev = temp;
            temp = temp->next;
            tempp = tempp->next->next;
        }
        prev->next = temp->next;
        
        
        delete temp;
        return head;
    }
};

//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

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
        struct Node* head = new Node(arr[0]);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        Solution obj;
        head = obj.deleteMid(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends