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
void insertatTail(node *&head, int val)
{

    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
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
node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
}
bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
node *reverseRecursive(node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}
void deleteatHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}
void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }

    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

node *reversek(node *&head, int k)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    int count = 0;
    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = reversek(nextptr, k);
    }
    return prevptr;
}
node *sort_list(node *head)
{
    node *tempNode = NULL;
    node *tempHead = head;
    node *tempNext = head->next;

    while (tempNext != NULL)
    {

        if (tempHead->data > tempNext->data)
        {
            tempNode = tempHead;
            tempHead = tempNext;
            tempNode->next = tempNode->next->next;
            tempHead->next = tempNode;
            tempNext = tempHead->next;
            display(tempHead);
        }
        else
        {
            tempHead = tempHead->next;
            tempNext = tempNext->next;
        }
    }
    return head;
}

int main()
{
    node *head = NULL;
    insertatTail(head, 1);
    insertatTail(head, 5);
    insertatTail(head, 3);
    insertatTail(head, 4);
    insertatTail(head, 0);
    display(head);
    // insertatHead(head, 0);
    // display(head);
    // cout << search(head, 4) << endl;

    // node *newhead = reverseRecursive(head);
    // display(newhead);
    //  deletion(head,3);
    //  deleteatHead(head);

    display(head);

    //int k = 2;
    //node *newhead = reversek(head, k);
    //display(newhead);
    sort_list(head);
    return 0;
}