//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    if (arr.empty()) {
        return NULL;
    }
    int val = arr[0];
    int size = arr.size();

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        val = arr[i];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
 class Solution
{
    public:
    Node* reverse(Node* root)
    {
        //base case
        if(root==NULL)
        return NULL;
        
        if(root->next==NULL)
        return root;
        
        //recursive calls
        Node* temp=reverse(root->next);
        root->next->next=root;
        root->next=NULL;
        return temp;
    }

    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* i=reverse(first);
        Node* j=reverse(second);
        
        Node* head=NULL;
        Node* tail=NULL;
        int c=0;
        while(i and j)
        {
            int sum=c+(i->data)+(j->data);
            int first=sum/10;
            int last=sum%10;
            c=first;
            
            Node* newnode=new Node(last);
            if(head==NULL)
            {
                head=newnode;
                tail=head;
            }
            else
            {
                tail->next=newnode;
                tail=newnode;
            }
            i=i->next;
            j=j->next;
        }
        
        while(i)
        {
            int sum=c+i->data;
            int first=sum/10;
            int last=sum%10;
            c=first;
            
            Node* newnode=new Node(last);
            if(head==NULL)
            {
                head=newnode;
                tail=head;
            }
            else
            {
                tail->next=newnode;
                tail=newnode;
            }
            i=i->next;
        }
        
        while(j)
        {
            int sum=c+j->data;
            int first=sum/10;
            int last=sum%10;
            c=first;
            
            Node* newnode=new Node(last);
            if(head==NULL)
            {
                head=newnode;
                tail=head;
            }
            else
            {
                tail->next=newnode;
                tail=newnode;
            }
            j=j->next;
        }
        
        if(c)
        {
            Node* newnode=new Node(c);
            tail->next=newnode;
            tail=newnode;
        }
        
        head=reverse(head);
        while(head and head->data==0)
        head=head->next;
        
        if(!head)
        {
            Node* newnode=new Node(0);
            return newnode;
        }
        return head;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input

    while (t--) {
        Node* num1 = buildList();
        Node* num2 = buildList();
        Solution ob;
        Node* res = ob.addTwoLists(num1, num2);
        printList(res);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends