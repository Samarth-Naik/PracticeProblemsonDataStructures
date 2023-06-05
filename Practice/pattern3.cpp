#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5-i;j>0;j--)
        {
            cout<<"_";
        }
        for(int k=0;k<i;k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}