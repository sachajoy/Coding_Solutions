// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node *rotate(struct Node *head, int k);

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        cout << "hello";
        cin>> k;
        
        head = rotate(head,k);
        printList(head);
    }
    return 0;
}
// } Driver Code Ends


/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

// This function should rotate list counter-clockwise
// by k and return new head (if changed)

Node* rotate(Node* head, int k)
{
    if(head == NULL || k <= 0){
        // cout << "base";
        return head;
    }
    Node *slow=head, *fast=head;
    int count = 1;
    while(count != k+1 && fast != NULL){
        fast = fast->next;
        count++;
    }
    if(fast == NULL){
        // cout << "null case";
        return head;
    }
    while(fast->next != NULL){
        fast = fast->next;
        slow = slow->next;
    }
    cout << fast->data << endl;
    cout << slow->data << endl;
    fast->next = head;
    Node*ans = slow->next;
    slow->next = NULL;
    return ans;
}
