#include<iostream>
using namespace  std;
void freq(int *arr,int n)
{
    int freq= 1;
    int cur= arr[0];
    if (n==1)
    {
        /* code */
        cout<<arr[0]<<" -- "<<freq<<"\n";
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=cur)
        {
            cout<<arr[i-1]<<" -- "<<freq<<"\n";
            cur=arr[i];
            freq=1;
        }
        else if(arr[i]==cur)
        {
            freq++;
        }
        if(i==n-1)
        {
            cout<<arr[i]<<" -- "<<freq<<"\n";
        }
        
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
    freq(arr,n);
}