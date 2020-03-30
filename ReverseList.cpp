#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};
Node *head;
 
void createList(int n)    // First Create the Singly LinkedList 
{                        // n is number of nodes 12
    Node *newNode,*temp;
    int nodeData;
    
    head  = new Node();
    if(head==NULL)
    {
        cout<<"Unable to allocates";
    }
    
    else
    {
        cout<<"Enter the data of node 1st : ";     // First data in start/head node
        cin>>nodeData;
        
        head->data = nodeData;
        head->next = NULL;
        temp = head;

        for(int i=2;i<=n;i++)
        {
            newNode = new Node();
            if(newNode == NULL)
            {
                cout<<"Unable to allocate memory.";
                break;
            }
            else
            {
                cout<<"Enter the data of "<<i<<" node : ";  // Now data in other nodes 
                cin>>nodeData;

                newNode->data = nodeData;     // Assign data into newNode until i<=n
                newNode->next = NULL;        // Link address field with NULL

                temp ->next = newNode;     
                temp = temp->next;
            }
            
        }
        cout<<"\t\t\t\t\tSingly Linked List is created successfully"<<endl;
    }
    
}

void reverseList()
{
    Node *current,*prev,*forword;
    current = head;
    prev = NULL;
    forword =NULL;
    while (current!=NULL)
    {
        forword = current->next;  // Store the address of the next node
        current->next = prev; // cut link and connect to previous
        prev = current;
        current = forword; // next local variable
    }
    head=prev;
    //return head;
    
}

void printList()
{
    Node *temp;
    temp = head;
    cout<<"\n\t\t\t\tList is:";
    while(temp!=NULL){
        cout<<" "<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    head = NULL;
    int n,data;
    cout<<"\n\t\t\tHow many nodes: ";
    cin>>n;
    createList(n);   
    printList();
   
    reverseList();
    printList();   
}