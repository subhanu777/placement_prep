#include<iostream>
using namespace  std;
int profit(int *arr, int start, int end)
{
    if(end>=start)
        return 0;
    int prof=0;
    for(int i=start;i<end;i++)
    {
        for (int j = i+1; j<=end; j++)
        {
            if(arr[j]>arr[i])
            {
                int cur_profit=arr[j]-arr[i]+profit(arr,start,i-1)+profit(arr,j+1,end);
                prof=max(cur_profit,prof);
            }
        }
    }
    return prof;
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
    cout<<profit(arr,0,n);
}