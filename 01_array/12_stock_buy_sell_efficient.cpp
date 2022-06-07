#include<iostream>
using namespace  std;
void max_profit(int *arr,int n)
{
    int profit=0;
    for (int i = 1; i <n; i++)
    {
        if(arr[i]>arr[i-1])
            profit += (arr[i]-arr[i-1]);
    }
    cout<<"\nMax profit  "<<profit;
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
    max_profit(arr,n);
}