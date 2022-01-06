#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,n,largest,secondlrg;
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
        cout<<" "<<arr[i];
    }
    largest=0;
    secondlrg=-1;
    
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            secondlrg=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
        {
            if (arr[i]>arr[secondlrg] || secondlrg==-1)
            {
                secondlrg=i;
            }
        }
    }
    cout<<"\nsecond largest index:"<<secondlrg;
}