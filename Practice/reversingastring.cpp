#include<iostream>
using namespace std;
#define MAX 100

class stack{
  int top;
  char arr[MAX];

public:
  stack(){
    top=-1;
  }

  void push(char x)
  {
    if(top==MAX-1)
    {
        cout<<"stack overflow";
        return ;
    }
    top++;
    arr[top]=x;
  }

  char pop()
  {
    if(top==-1)
    {
        cout<<"stack is empty";
    }
      return arr[top--];
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

    char arr[]="hello";
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        s1.push(arr[i]);
    }
   s1.printstack();

   char newarr[]="";
    for(int i=0;i<n;i++)
    {
        newarr[i]=s1.pop();
    }

     for(int i=0;i<n;i++)
    {
        cout<<newarr[i];
    }
    

}