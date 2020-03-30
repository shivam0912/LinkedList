//                             This Program for insertion at nth position

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
           int data;
           Node *next;
};
Node* head;

void Insert(int data,int pos)
{
    Node *temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;

    if(pos==1)
    {
        temp1->next = head;
        head= temp1;
        return;
    }
    Node *temp2 = head;
    for(int i=0;i<pos-2;i++)
    {
        temp2= temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
    cout<<endl;
}
void Print()
{
   Node* temp =head;
   cout<<"\n\t\t\t\tList is : ";
   while(temp!=NULL)
   {
   cout<<" "<<temp->data;
   temp = temp->next;
   }
   cout<<endl;
}
int main()
{
   head =NULL; // Empty List

   int pos,d;
   int n;
   cout<<"\n\t\t\t\t !!! Please create at least 2 nodes !!! "<<endl;
   cout<<"\n\t\t\t How many nodes: ";
   cin>>n;

   for(int i=0;i<n;i++)
   {
   cout<<"\n\t Enter the data: ";
   cin>>d;
   cout<<"\n\t Enter the position: ";
   cin>>pos;
   Insert(d,pos);
   Print();
   }
}