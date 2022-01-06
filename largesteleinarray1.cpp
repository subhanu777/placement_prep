#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,n;
    cout<<"Give number of elements:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\ninput an element:";
        cin>>arr[i];
    }
    cout<<"The inputted array is:";
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    int largest=0;
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])  
            largest=i;
    }
    cout<<"\nlargest:"<<largest;
}