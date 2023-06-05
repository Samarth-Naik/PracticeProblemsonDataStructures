#include<iostream>
using namespace std;
void reversearr(int arr[],int start,int end)
{

    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main()
{

    int arr[]={3,6,8,1,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    reversearr(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
