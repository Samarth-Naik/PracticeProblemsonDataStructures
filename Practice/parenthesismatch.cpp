#include<iostream>
#include<string>
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

  char Top()
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
        return true;
    }else 
      return false;
   }
   bool isfull()
   {
     if(top==MAX-1)
    {
        cout<<"stack overflow";
        return true;
    }else
       return false;
   }
   void  printstack()
   {  for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<" ";
    }
    }

   bool isbalanced(string str,int n)
   {
      for(int i=0;i<n;i++)
      {
        char cur=str[i];
        if(cur=='(' || cur=='{' || cur=='[' )
        {
            push(cur);
        }
        else{

            if(isempty()){
                return false;
            }
            else if((cur==')' && Top()=='(') || (cur=='}' && Top()=='{') || (cur==']' && Top()=='[')) 
            {
                pop();
            }
            else{
                return false;
            }
        }
      } 
      return isempty();
   } 

};
int main()
{    
     stack s1;
     string str="({[}]})";
     int n=str.length();
     
     if( s1.isbalanced(str,n))
     {
     cout<<"bakanced";
     }
     else{
        cout<<"unbalanced";
     }
     s1.printstack();

     return 0;
}