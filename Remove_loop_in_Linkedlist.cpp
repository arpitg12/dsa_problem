/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
       Node* fast=head;
       Node* slow=head;
       while(fast && fast->next){
           fast=fast->next->next;
           slow=slow->next;
           if(fast==slow){
               break;
           }
       }
      if(!fast || fast->next==NULL || !slow){
          return;
      }
     
        fast=head;
        while(fast!=slow){
            fast=fast->next;
            slow=slow->next;
        }
        while(fast->next!=slow){
            fast=fast->next;
        }
        fast->next=NULL;
       
       
    }
};