class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
         Node* fast=head,*slow=head;
       
       bool flag=0;
       
       while( fast && fast->next)
       {
           slow=slow->next;
           fast=fast->next->next;
           
           if(slow==fast) {
             flag=1;
             break;
           }
       }
       
       if(flag)
       {
           fast=head;
           
           if(slow==fast)
           {
               while(fast->next!=slow)
               fast=fast->next;
               
               fast->next=NULL;
           }
           
           else{
               
           
           while(fast->next!=slow->next)
           {
                fast=fast->next;
                slow=slow->next;
           }
           
           slow->next=NULL;
        
           }
       }
       
        //return false;
   }
};