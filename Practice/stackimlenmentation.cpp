#include<iostream>
using namespace std;
#define MAX 4

class stack{
  int top;
  int arr[MAX];

public:
  stack(){
    top=-1;
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
  }

  void pop()
  {
    if(top==-1)
    {
        cout<<"stack is empty";
        return ;
    }
      top--;
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

};

int main()
{
    stack s1;

    s1.push(45);
    s1.push(5);
    s1.push(15);
    s1.push(9); 
    s1.push(56);

    s1.printstack();
   

}