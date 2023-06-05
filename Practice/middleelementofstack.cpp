#include<iostream>
using namespace std;
#define MAX 100

class stack{
  int top;
  int middle;
  int arr[MAX];

public:
  stack(){
    top=-1;
    middle=-1;
  }

  void push(int x)
  {
    if(top==MAX-1)
    {
        cout<<"stack overflow";
        return ;
    }
    top++;
    arr[top]=x;

    if(middle==-1)
    {
        middle=top;
    }
    if(top%2==0)
    {
        middle++;
    }
  }

  void pop()
  {
    if(top==-1)
    {
        cout<<"stack is empty";
        return ;
    }
      top--;

      if(top%2==0)
      {
        middle--;
      }
  }

  int Top()
  {
     if(top==-1)
    {
        cout<<"stack is empty";
        return 0 ;
    }
    return arr[top];
  }
   bool isempty()
   {
    if(top==-1)
    {
        cout<<"stack is empty";
        return 1;
    }
   }
   bool isfull()
   {
     if(top==MAX-1)
    {
        cout<<"stack overflow";
        return 0;
    }
   }
   void  printstack()
   {  for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<" ";
    }
  } 

  void findmiddle()
  {
    cout<<arr[middle];
    
  }


};

int main()
{
    stack s1;

    s1.push(45);
    s1.push(5);
    s1.push(15);
    s1.push(9); 
    s1.push(56);
    s1.push(6);
    s1.push(506);

    s1.printstack();
    s1.pop();
    s1.findmiddle();

}