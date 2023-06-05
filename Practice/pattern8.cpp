#include<iostream>
using namespace std;
int main()
{
    for(int i=5;i>0;i--)
    {
        for(int j=5-i;j>0;j-- )
        {
            cout<<"_";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<(5-i+1);
        }
        cout<<"\n";

    }
   
}