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
    int k=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            arr[k]=arr[i];
            k++;
        }
    }
    cout<<"The output array is:";
    cout<<k;
    for(int i=0;i<k;i++)
    {
        cout<<" "<<arr[i];
    }
}