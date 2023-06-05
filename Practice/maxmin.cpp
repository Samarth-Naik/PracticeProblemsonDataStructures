#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,5,77,9,8};

    int min=arr[0];
    int max=arr[0];
    
    for(int i=1;i<5;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"maximun"<<max;
    cout<<"minimun"<<min;
}