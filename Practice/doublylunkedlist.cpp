#include<iostream>
using namespace std;
class Node{
   public:
    int data;
    Node* next;
    Node* prev;

    Node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }
  
};

class dbllist{
    private:
   Node* head;
   Node* temp;
     public:
    dbllist()
    {
        head=NULL;
        temp=head;
    }

    void inserathead(int value)
    {
        Node* newnode=new Node(value);

        if(head==NULL)
        {
            head=newnode;
        }else{
             newnode->next=head;
             head->prev=newnode;
             head=newnode;

        }

    }
   
   void inserattail(int value)
   {
    Node* newnode=new Node(value);

        if(head==NULL)
        {
            inserathead(value);
            return ;
        }
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    

   }
   
   void display()
   {
    temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
   }

    void displayback()
    {
        temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
      Node* temp2=temp->prev;
    while(temp2->prev!=NULL)
    {   
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
       
      
    }
};
int main()
{  
    dbllist d1;
    d1.inserathead(10);
    d1.inserathead(20);
    d1.inserathead(30);
    d1.inserathead(40);
    d1.inserattail(60);
    d1.display();
    cout<<"\n";
    d1.displayback();
    return 0;
}