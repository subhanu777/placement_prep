#include<iostream>
using namespace std;
void reverse(int *arr,int low,int high);
void left_rotate_by_d(int *arr,int n)
{
    int d;
    cout<<"input d:";
    cin>>d;
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    cout<<"The output array is:";
    
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
}
void reverse(int *arr,int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

int main()
{
    int n,arr[100];
    cout<<"Input number of elements:";
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    left_rotate_by_d(arr,n);
}