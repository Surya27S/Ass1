#include<iostream>
using namespace std;
void Sort(int arr[] ,int n)
{
    for(int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}
int main()
{
    int Size;
    cout<<"Enter the Size Of the array : ";
    cin>>Size;
    int arr[Size];
    cout<<"Enter array elements below.. "<<endl;
    for(int i=0 ; i<Size ; i++)
    {
        cin>>arr[i];
    }
    Sort(arr,Size);
    cout<<"The sorted array is.."<<endl;
    for(int i=0 ; i<Size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}