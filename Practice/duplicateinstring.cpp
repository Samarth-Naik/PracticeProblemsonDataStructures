#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="madam";
    int n=str.length();
    cout<<n;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(str[i]==str[j])
            {
                cout<<str[i]<<" ";
            }
        }
    }
    return 0;
}