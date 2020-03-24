#include<bits/stdc++.h>                                                    // Output :    
using namespace std;                                                            // Elements is : 1 2 3
class Node{                                                                     // Total Elements : 3                                      
    public:
    int data;
    Node* next;
};

// Performing traverse and print the elements
void printList(Node* head){
    int count = 0;
    cout<<"Elements is : ";
    
    while(head!=NULL){
        count++;
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"Total element is :"<<count;        // Count the elements
}

int main(){
     
    Node* head = NULL; 
    Node* second = NULL; 
    Node* third = NULL; 
   
    head = new Node(); 
    second = new Node(); 
    third = new Node();      // allocating memory of 3 nodes 
    
    head->data = 1;       // assign data in first node             **Derefrencing**
    head->next = second; // Link first node with second 
  
    second->data = 2; // assign data to second node 
    second->next = third; 
  
    third->data = 3; // assign data to third node 
    third->next = NULL; 

   printList(head); 
 return 0;
}
