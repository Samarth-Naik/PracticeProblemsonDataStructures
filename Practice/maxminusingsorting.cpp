#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
         for(int i=0;i<n-1;i++)
         {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
         }
}
int main()
{
    int arr[]={98,6,34,8,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    cout<<"\n";
    for(int i=0;i<n;i++)
    {   
        cout<<arr[i]<<"\t";
    }
    int max=arr[n-1];
    int min=arr[0];
    cout<<"\nmaximun"<<max;
    cout<<"\nminimum"<<min;

   return 0;
}