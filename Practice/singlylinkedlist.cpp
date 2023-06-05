#include<iostream>
using namespace std;

class Node
{
    public:
      int data;
      Node* next;

      Node(int value){
        data=value;
        next=NULL;
      }
};

class LinkedList{
    private:
       Node* head;

     public:
         LinkedList(){
            head=NULL;
         }  


      //insert data   
       void insert(int value){
           Node* newnode=new Node(value);

           if(head==NULL)
           {
             head=newnode;
           }else{
            newnode->next=head;
            head=newnode;
           }
       }
        // insert at tail
        void inserttail(int value)
        {
            Node *newnode=new Node(value);

            if(head==NULL)
            {
                head=newnode;
            }else{
                Node* temp=head;

                while(temp->next!=NULL){
                    temp=temp->next;
                }
                temp->next=newnode;
            }



        }
       // display data
       void display(){
        Node* temp=head;

        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
       }

       // seraching an element
       bool search(int value)
       {
        Node* temp=head;

        while(temp!=NULL)
        {
            if(temp->data==value){
                return true;
            }
            temp=temp->next;
        }
        return false;
       }

       //delete a node with given value

       void remove(int value)
       {
         if(head->data==value){
            Node* temp=head;
            head=head->next;
            delete temp;
            return;
         }

         Node* prev=head;
         Node* cur=head->next;

         while(cur!=NULL){
            if(cur->data==value){
                prev->next=cur->next;
                delete cur;
                return;
            }

            prev=cur;
            cur=cur->next;
         }
       }

       //reverse the linked list

       void reverse()
       {
            Node* currrent=head;
            Node* prev=NULL;
            Node* next=NULL;

            while(currrent!=NULL){
                 next=currrent->next;

                 currrent->next=prev;

                 prev=currrent;
                 currrent=next;

            }

            head=prev;
       }

    bool detectLoop() {
        Node* slow = head;
        Node* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return true; // Loop detected
            }
        }

        return false; // No loop detected
    }
    

        // Remove duplicates from the sorted linked list
    void removeDuplicates() {
        if (head == nullptr) {
            return;
        }

        Node* current = head;
        while (current != nullptr && current->next != nullptr) {
            if (current->data == current->next->data) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
            } else {
                current = current->next;
            }
        }
    }

        // Find the middle element of the linked list
    int findMiddle() {
        if (head == nullptr) {
            return 0;
        }

        Node* slow = head;
        Node* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow->data;
    }

    // Create a loop in the linked list for testing purposes
    void createLoop() {
        if (head == nullptr) {
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        // Create a loop by connecting the last node to the second node
        temp->next = head->next;
    }

    // Check if the linked list is circular
    bool isCircular() {
        if (head == nullptr) {
            return false;
        }

        Node* slow = head;
        Node* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return true; // Circular linked list
            }
        }

        return false; // Not a circular linked list
    }

};

int main()
{    

    LinkedList mylist;

    mylist.insert(10);
    mylist.insert(20);
    mylist.insert(50);
    mylist.insert(70);

    mylist.display();
    cout<<"\n";
    cout<<mylist.search(20)<<"   ";
    cout<<mylist.search(40)<<"\n";

    mylist.remove(70);
    mylist.display();
    cout<<"\n";
    mylist.inserttail(69);
    mylist.display();

    mylist.reverse();
    cout<<"\n ";
    mylist.display();
    cout<<mylist.findMiddle();
    return 0;
}