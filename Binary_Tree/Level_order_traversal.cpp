#include <bits\stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int data)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void printLevelOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node* node = q.front();
        if(node != NULL){

            
        }
    }
    
}