#include<iostream>
using namespace  std;
void max_diff(int *arr,int n)
{
    int cur_diff= -10000000;
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(cur_diff<arr[j]-arr[i])
            {
                cur_diff=arr[j]-arr[i];
            
            }
        }
    }
    cout<<" "<<cur_diff;
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
    max_diff(arr,n);
}