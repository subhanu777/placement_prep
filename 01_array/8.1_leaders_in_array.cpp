#include<iostream>
using namespace  std;
void leaders_in_array(int *arr,int n)
{
    int cur_leader= arr[n-1];
    cout<<" "<<cur_leader;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>cur_leader)
        {
            cur_leader=arr[i];
            cout<<" "<<cur_leader;
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
    leaders_in_array(arr,n);
}