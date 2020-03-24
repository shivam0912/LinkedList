#include<bits/stdc++.h>
using namespace std;
class Node             
{
  public:
    int data;
    Node* next;    
};

Node* Insert(Node* head,int x)
{
  Node* temp = NULL;
  temp = new Node();
  temp->data = x;  //derefrencing   (*temp).data=x;
  temp->next = NULL; //when use only list empty and head is already full
 
  if (head!=NULL) temp->next = head;
    
    head=temp;        
    return head;
}
void print(Node* head)
{ 
 cout<<"\t\t\t\t\tModefied List is:";
  while(head != NULL)
  {
    cout<<" "<<head->data;
    head = head->next;
  }
  cout<<"\n";
}
int main()
{
    int n,i,x;
    Node *head = NULL; // Empty list
    cout<<"How many nodes: ";  
    cin>>n;
    for(i=0;i<n;i++)
    {
      cout<<"\t\tEnter the data: ";
      cin>>x;
      head= Insert(head,x);
      print(head);
    }    
}
