#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
           int data;
           Node *next;
};
Node* head; // Global Variable 

void createList(int n)    // First Create the Singly LinkedList 
{                        // n is number of nodes 
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

// This function for insert the node at the end position
void insertAtTheEnd(int toInsert)
{                                      // toInsert is an  argument for inserting
   Node *newNode,*temp;
   newNode = new Node();

   if(newNode == NULL)
   {
       cout<<"Unable to allocate memory."<<endl;
   }
   else
   {
       newNode->data = toInsert;        // Assign the data into Node 
       newNode ->next = NULL;          // Link address field with NULL

       temp = head;

       //traversing to the last node

       while(temp->next!=NULL)
       {
          temp = temp->next;
       } 
        temp ->next = newNode; //Link the address part

        cout<<"\t\t\t\t\t\nData Inserted Successfully."<<endl;

   }   
}

void PrintList() 
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
   int toInsert,x;
 // Created Singly Linked List
    cout<<"\n\t\t\t\t\t\t\t Total number of nodes: ";
    cin>>x;
    createList(x);
 
 // Insert data at the end of singly Linked List

 cout<<"\nEnter the data to insert at end of node: ";
 cin>>toInsert;
 insertAtTheEnd(toInsert);

 // Print the List 
cout<<"--------------------------------------------------------------------------------------------------"<<endl;
cout<<"\t\t\t\t Display the List"<<endl;
PrintList();
}