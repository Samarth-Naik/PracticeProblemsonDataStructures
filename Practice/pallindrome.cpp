#include<iostream>
#include<string>
using namespace std;
bool pallindrome(string str,int n)
{
    int start=0;
    int end=n-1;

    while(start<end)
    {
        if(str[start]!=str[end])
        {
            return false;
        }
        start++;
        end--;

    }
    return true;
}
int main()
{
    string str="madam";
    int n=str.length();
    cout<<n;

    bool ispal=pallindrome(str,n);
    if(ispal)
    {
        cout<<"ispallindrome";
    }else
    {
         cout<<"not pallindrome";   
    }
}