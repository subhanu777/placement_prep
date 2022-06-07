#include<iostream>
using namespace std;
int main()
{
    int n,arr[100];
    cout<<"Input number of elements:";
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[k]=arr[i];
            k++;
        }
    }
    for (int i = k; i < n; i++)
    {
        arr[i]=0;
    }
    
    cout<<"The output array is:";
    cout<<k;
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
}