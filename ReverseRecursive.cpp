#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
      int data;
      Node *next;
};
Node *head;

void createList(int val)
{
    Node *temp,*newNode;
    newNode = new Node();
    temp = NULL;
    newNode->data = val;
    newNode->next = NULL;
    if(head == NULL){
        head =newNode;
        return;
    }
    temp = head;
    while(temp->next)
       temp = temp->next;
       temp->next = newNode;

}

void PrintList()
{
    Node *temp;
    temp = head;
    cout<<"\n\t\t\t\tList is: ";
    while (temp!=NULL)
    {
        cout<<" "<<temp->data;
        temp = temp->next;
    }
    cout<<endl;
    
}
void reverse(Node* p){
      
    if(p==NULL) {
    //cout<<endl;
    return; 
    }
    reverse(p->next);
    cout<<" "<<p->data;
   

}
int main()
{
    head = NULL;
    int val,nodes;
    cout<<"\n\nHow many nodes: ";
    cin>>nodes;
    for(int i=0;i<nodes;i++)
    {
        cout<<"\n\t\t Enter the data : ";
        cin>>val; 
        createList(val);
        
    }
    PrintList();

    cout<<"\n\t\t\t\tRecursive List is:";
    reverse(head);
    
}