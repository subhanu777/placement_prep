#include<iostream>
using namespace  std;
void leader(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
            {
                flag=true;
                break;
    
            }
        }
        if (flag==false)
        {
            cout<<arr[i];
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
    leader(arr,n);
}