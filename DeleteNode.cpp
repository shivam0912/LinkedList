#include<bits/stdc++.h>
using namespace std;
class Node
{ 
   public:
   int data;
   Node* next;
};
Node* head;
// void Insert(int data); //Insert a integer at the end of List
// void Print(); //Print all elemrnts in the List
// void Delete(int pos); // Delete the node at position
void Insert(int data)
{
   Node *new_node =NULL;
   Node *last =NULL;
   new_node =new Node();
   if(new_node==NULL){
       cout<<"Unable to allocates:";
   }
// If we want insert at front   
//    newNode->data=data;
//    newNode->next=head;
//    head =newNode;

    new_node->data = data;
    new_node->next = NULL;
 
    if( head == NULL)
    {
        head = new_node;
        return;
    }
 
    last = head;
    while(last->next)
     last = last->next;
 
    last->next = new_node;

}
    void Delete(int pos)
    {
        Node* temp1 = head;
        if(pos == 1)
        {
            head =temp1->next; //head now point the second node
            delete temp1;
            return;
        }
        for(int i=0;i<pos-2;i++)
            temp1 = temp1->next; //temp1 points to (pos-1)th node
    
            Node* temp2 = temp1->next; // pos'th node
            temp1->next = temp2->next; // (pos+1)th Node
            delete temp2; //free(temp2); 
        
    }
    // void Delete()   if we want to delete only first node
    // {
    //     Node* temp =head;
    //     head = temp->next;
    //     delete temp;
    // 
       
void Print()
{
    Node *temp;
    if(head == NULL)
    {
        cout<<"List is empty.";
    }
    else
    {
        temp = head;
        cout<<"Data in the List is:"<<endl;
        while (temp!=NULL)                            // Traversing 
        {
            cout<<"\tData:"<<temp->data<<endl;
            temp=temp->next;
        }    
    }   
}
int main()
{
    cout<<"Process..."<<endl;
    head = NULL;
    // Insert(3);
    // Insert(4);
    // Insert(1);
    // Insert(2);

    int val,nodes;
    cout<<"How many nodes: ";
    cin>>nodes;
    for(int i=0;i<nodes;i++)
    {
        cout<<"Enter the data : ";
        cin>>val; 
        Insert(val);
      
    }
    Print();
    int pos;
    cout<<"Enter the position: ";
    cin>>pos;
    Delete(pos);
    Print();
   
}
