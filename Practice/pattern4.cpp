#include<iostream>
using namespace std;
int main()
{
    for(int i=5;i>0;i--)
    {
        for(int j=5-i;j>0;j--)
        {
            cout<<"_";
        }
        for(int k=i;k>0;k--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}