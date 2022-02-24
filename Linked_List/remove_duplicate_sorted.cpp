#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
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

node* removeDuplicates(node *head)
{

    node *curr = head;
    node *temp;
    while (curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else
            curr = curr->next;
    }
    return head;
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
int main()
{
    node *head = NULL;
    insertatTail(head, 7);
    insertatTail(head, 5);
    insertatTail(head, 5);
    insertatTail(head, 3);
    insertatTail(head, 3);
    display(head);
    removeDuplicates(head);
    display(head);
}