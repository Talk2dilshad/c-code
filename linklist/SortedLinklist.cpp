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
void display(Node*  head)
{
    cout<<"\nDisplaying Linklist ";
    while (head!=NULL)
    {
        cout<<"->"<<head->data;
        head=head->next;
    }
    cout<<endl;
}
// * To delete a node from the linked list, we need to do the following steps. 
//  1) Find the previous node of the node to be deleted. 
//  2) Change the next of the previous node. 
//  3) Free memory for the node to be deleted.

//  CHECK LINKLIST IS LOOPED 
int isLoop(Node*  head)
{
    Node* q;
    Node* p;
    p=q=head;
    do{
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    }
    while(p && q && p!=q);
    if(p==q)
    {
        return 1;
    }
    else
    return 0;
}



void delete_node(Node**  head,int key)
{
    Node* temp=*head;
    Node* prev=NULL;
    // If head node itself holds 
    // the key to be deleted 
    if(temp!= NULL && temp->data==key)
    {
        *head=temp->next;
        delete temp;
        return;
    }
    // Else Search for the key to be deleted,  
    // keep track of the previous node as we 
    // need to change 'prev->next' 
    while (temp!=NULL && temp->data != key)
    {
        prev=temp;
        temp=temp->next;
    }
    // if key is not present in the linklists 
    if(temp==NULL)
    return;

    //linking the prev to temp next
    prev->next=temp->next;

    delete temp;
    
}
/* Recursive Function to get the nth node from the last of a linked list*/
void nth_node(Node*  head,int node_no_from_last)
{
    static int i=0;
    if(head==NULL)
    {
        return;
    }
    nth_node(head->next,node_no_from_last);
    if(++i==node_no_from_last)
    {
        cout<<"\nNODE FROM LAST->"<<head->data;
    }
}
//* check linklist is sorted or not ??
int isSorted(Node* head)
{
    int x=INT_MIN;
    while(head!=NULL)
    {
    if(head->data<x)
        return 0;
    
    x=head->data;
    head=head->next;
    }
    return 1;
}
void Remove_Duplicate(Node*  head)
{
    Node* ptr1=head; Node* ptr2;
    
    while (ptr1 != NULL && ptr1->next != NULL) 
    { 
        ptr2 = ptr1; 
  
        /* Compare the picked element with rest 
           of the elements */
        while (ptr2->next != NULL) 
        { 
            /* If duplicate then delete it */
            if (ptr1->data == ptr2->next->data) 
            { 
                /* sequence of steps is important here */
                ptr2->next = ptr2->next->next; 
            } 
            else /* This is tricky */
                ptr2 = ptr2->next; 
        } 
        ptr1 = ptr1->next; 
    } 
}
Node *newNode(int data) 
{ 
   Node *temp = new Node; 
   temp->data = data; 
   temp->next = NULL; 
   return temp; 
} 
void ReverseLink(Node*  head)
{
   Node* next=NULL;
   Node* current=head;
   Node* prev=NULL;
   
   while(current != NULL)
    {
        //store next
        next=current->next;
        //reverse  current pointer node's
        current->next= prev;
        //Move pointer one position ahead 
        prev=current;
        current=next;
    }
    head=prev;
     display(head);
}
void Sorted_Merge (Node*  head1,Node*  head2)
{
    Node* new_head=NULL;
    Node* last=NULL;
    if(head1->data<head2->data)
    {
        new_head=last=head1;
        head1 = head1->next;
        last->next=NULL;
    }
    else
    {
        new_head=last=head2;
        head2= head2->next;
        last->next=NULL;
    }
    while(head1 && head2 )
    {
       if(head1->data < head2->data)
       {
       last->next=head1;
       last=head1;
       head1=head1->next;
       last->next=NULL;
       }
       else
       {
        last->next=head2;
       last=head2;
       head2=head2->next;
       last->next=NULL;
       }
    }
    if(head1) last->next=head1;
    if(head2) last->next=head2;
    display(new_head);

}

int main()
{
    Node* head=newNode(1);
   head->next=newNode(3);
   head->next->next=newNode(5);
   head->next->next->next=newNode(6);
   head->next->next->next->next=newNode(8);
   head->next->next->next->next->next=newNode(10);
   head->next->next->next->next->next->next=newNode(20);
   Node* head2=NULL;
   push(&head2,15);
  push(&head2,9); push(&head2,7); push(&head2,4); 

 //   delete_node(&head,5);
   
 //   nth_node(head,4);
    display(head);
    
    display(head2);

    Sorted_Merge(head,head2);
   
    cout<<isLoop(head);
// ReverseLink(head);
//  cout<<isSorted(head);
// Remove_Duplicate(head);
  
}