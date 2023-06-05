#include<iostream>
using namespace std;
#define MAX 100

class quueue{
  
   int front;
   int back;
   int arr[MAX];

   public:
      quueue()
      {
        front=-1;
        back=-1;
      }
     
     void push(int x)
     {
        if(back==MAX-1)
        {
            cout<<"overflow";
            return;
        }
        back++;
        arr[back]=x;

        if(front==-1)
        {
            front++;
        }
     }

     void pop()
     {
        if(front==-1 || front>back)
        {
            cout<<"no items to pop";
            return;
        }

        front++;
     }

     int peek()
     {
        if(front==-1 || front>back)
        {
            cout<<"no items to pop";
            return -1;
        }
           return arr[front];
     }

     bool isempty()
     {  if(front==-1 || front>back)
        {
            cout<<"no items to pop";
            return true;
        }
           return false;

     }

     void display()
     {
        for(int i=front;i<=back;i++)
        {
            cout<<arr[i]<<" ";
        }
     }
};

int main()
{    
     quueue q1;
     q1.push(10);
     q1.push(20);
     q1.push(30);
     q1.push(40);
     
     q1.display();
     q1.pop();
     q1.pop();
     cout<<"\n";
     q1.display();
     cout<<"\n";
     cout<<q1.peek();

    return 0;
}