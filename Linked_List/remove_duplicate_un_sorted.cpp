Node * removeDuplicates( Node *head) 
   {
    // your code goes here
    
    if(head==NULL)
    {
       return NULL;
    }
    if(head->next==NULL)
    {
       return head;
    }
    unordered_set<int>visited;
    Node*curr=head;
    Node*prev=NULL;
    
   while(curr!=NULL)
   {
       if(visited.find(curr->data)!=visited.end())
       {
           prev->next=curr->next;
           delete(curr);
       }
       else
       {
           visited.insert(curr->data);
           prev=curr;
       }
       curr=prev->next;
   }
   return head;
   }