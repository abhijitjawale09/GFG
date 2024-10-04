//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Structure for the linked list node
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Function to print nodes in a given circular linked list
void printList(struct Node *head) {
    if (head != NULL) {
        struct Node *temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    } else {
        cout << "empty" << endl;
    }
    cout << endl;
}


// } Driver Code Ends
class Solution {
  public:
    // Function to reverse a circular linked list
    // Function to delete a node from the circular linked list
    Node* deleteNode(Node* head, int key) {
        if (head == NULL) return head;

        Node* curr = head;
        Node* prev = NULL;

        // If the node to be deleted is the head
        if (head->data == key) {
            // Find the last node (because it points to the head in circular linked list)
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            // If there's only one node
            if (temp == head) {
                delete head;
                return NULL;
            }

            // Set last node's next to head's next
            temp->next = head->next;
            head = head->next;  // Update head to next node
            return head;
        }

        // Traverse to find the node to delete
        do {
            prev = curr;
            curr = curr->next;
            if (curr->data == key) {
                prev->next = curr->next;
                delete curr;
                return head;
            }
        } while (curr != head);

        // If key is not found, return the list as is
        return head;
    }

    // Function to reverse a circular linked list
    Node* reverse(Node* head) {
        if (head == NULL || head->next == head) return head;

        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        Node* last = head;

        // Traverse the list to reverse the links
        do {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        } while (curr != head);

        // Fixing the links for the circular nature
        head->next = prev;
        head = prev;  // New head is the previous node

        return head;
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

        // Reading input into a vector
        while (ss >> number) {
            arr.push_back(number);
        }

        int key;
        cin >> key;
        cin.ignore();

        // Creating the circular linked list
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        tail->next = head; // Make the list circular

        Solution ob;

        // Delete the node with the given key
        head = ob.deleteNode(head, key);

        // Reverse the circular linked list
        head = ob.reverse(head);

        // Print the modified list
        printList(head);
    }
    return 0;
}

// } Driver Code Ends