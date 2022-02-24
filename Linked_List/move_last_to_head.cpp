#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertatHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void moveltof(node **head_ref)
{
    node *prevptr=NULL;
    node *currptr = *head_ref;
    
    //prevptr->next = head;
    while (currptr->next != NULL)
    {
        prevptr = currptr;
        currptr = currptr->next;
        
    }
    
        prevptr->next = NULL;
        currptr->next = *head_ref;
        *head_ref = currptr;
        
    
}

int main()
{
    node *head = NULL;
    insertatHead(head, 1);
    insertatHead(head, 5);
    insertatHead(head, 3);
    insertatHead(head, 4);
    insertatHead(head, 0);
    display(head);
    // insertatHead(head, 0);
    // display(head);
    // cout << search(head, 4) << endl;

    // node *newhead = reverseRecursive(head);
    // display(newhead);
    //  deletion(head,3);
    //  deleteatHead(head);
    moveltof(&head);
    display(head);

    // int k = 2;
    // node *newhead = reversek(head, k);
    // display(newhead);
    // sort_list(head);
    return 0;
