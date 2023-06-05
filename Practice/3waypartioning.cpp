#include<iostream>
using namespace std;

void sort(int arr[],int n)
{
    int l=0;
    int m=0;
    int h=n-1;

    while(m<h)
    {
        if(arr[m]==0)
        {
            int temp=arr[l];
            arr[l]=arr[m];
            arr[m]=temp;
             m++;
            l++;
        }else if(arr[m]==1)
        {
            m++;
        }else{
            int temp=arr[m];
            arr[m]=arr[h];
            arr[h]=temp;

            h--;
        }
       
    }
}
int main()
{
    int arr[]={1,1,0,0,2,0,1,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    #include<iostream>
using namespace std;

}