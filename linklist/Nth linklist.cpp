/*
*Algorithm: 

*1. Initialize count = 0
*2. Loop through the link list
*  a. if count is equal to the passed index then return current node
*  b. Increment count
*  c. change current to point to next of the current.
*/
#include<assert.h>
#include<bits/stdc++.h>
using namespace std;

// linklist
class Node
{
    public:
    int data;
    Node* next;
};
void push(Node** head,int new_DATA)
{
    Node* new_node= new Node();
    new_node->data=new_DATA;
    new_node->next=*head;
    *head=new_node;
}
int GetNth(Node* head,int index)
{
    Node* current=head;
    int count=0;
    while (current!=NULL)
    {
      if(index==count)
      {
          return (current->data);
      }
      count++;
      current=current->next;
    }
    
    /* if we get to this line, 
    the caller was asking 
    for a non-existent element 
    so we assert fail */
    assert(0);
}
void ReverseDisplay(Node* head)
{
 
  if(head != NULL)
  {
    
    cout<<"->"<<head->data;
    ReverseDisplay(head->next);
  }
}
void Sum(Node* head)
{
  int sum=0;
  while (head!=NULL)
  {
    sum+=head->data;
    head=head->next;
  }
  cout<<"\nSum of Linklist : "<<sum;
  
}

int MaxElement(Node* p)
{
  
  int Max=INT16_MIN;
  while(p)
  {
  if(p->data>Max)
    Max=p->data;
    p=p->next;
  }
  cout<<"\nMax Element: "<<Max;
}
int Searching(Node* p,int key)
{
  Node* first=NULL;
  Node* q;
  while(p!=NULL)
  {
    if(key==p->data)
    {
     q->next=p->next;
      p->next=first;
      first=p;
      return p->data;
    }
    q=p;
    p=p->next;
  }
  
}
void Insert(Node*  prev_node,int x)
{
  if(prev_node==NULL)
  {
    cout<<"Previous Node cannot be NULL";
    return;
  }
  Node* new_node=new Node();
  new_node->data=x;
  new_node->next=prev_node->next;
  prev_node->next=new_node;
}
void MiddleElement(Node*  head)
{
    Node* slow_ptr=new Node;
    Node* fast_ptr=new Node;
    slow_ptr=head;
    fast_ptr=head;
    if(head!=NULL)
   {
      while (fast_ptr!=NULL && fast_ptr->next != NULL)
      {
          fast_ptr=fast_ptr->next->next;
          slow_ptr=slow_ptr->next;
      }
       cout<<"\nMIDDLE ELEMENT -> "<<slow_ptr->data;
   }
}
void Sorted_Insert(Node*  head,int x)
{
    Node* t=new Node;
    Node* q=new Node;
    q=NULL;
 // making t node to store x data
    t->data=x;
    t->next=NULL;

    if(head == NULL)
    {
        head=t;
    }
    else
    {
        while (head && head->data<x)
        {
           q=head;
            head=head->next;
        }
        
        t->next=q->next;
        q->next=t;
    }

}
void Remove_Duplicate(Node*  head)
{
    Node* q= head->next;
    while(q!=NULL)
    {
      if(head->data!=q->data)
      {
         
        q=head;
        head=head->next;
      }
      else
      {
          head->next=q->next;
          delete q;
          q=head->next;
      }
    }
}
//Driver code
int main()
{
    Node* head=NULL;
    // Use push() to construct 
    // below list 
    // 1->12->1->4->1 
    push(&head,10);
    push(&head,7);push(&head,7);push(&head,3);push(&head,1);
    push(&head,1);
  /*  cout << "Element at index 3 is " << GetNth(head, 3); 
    cout<<endl;
    cout<<"Reverse Linklist : \n";
   ReverseDisplay(head);
    Sum(head);
    MaxElement(head);
    cout<<endl;
  //  cout<<Searching(head,4);
  
   // Insert(head->next,19);
    MiddleElement(head);
    Sorted_Insert(head,2);
    cout<<endl;  */
    Remove_Duplicate(head);
    ReverseDisplay(head);
    return 0; 
}