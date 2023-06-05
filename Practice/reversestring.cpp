#include<iostream>
using namespace std;
void reversestring(char arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<end)
    {
        char temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    char arr[]="hello world";
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n;

    reversestring(arr,n);
    for(int i=0;i<n;i++)
    {   
        cout<<arr[i]<<"\t";
    }
    return 0;
}