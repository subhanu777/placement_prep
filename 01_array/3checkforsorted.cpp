#include<iostream>
using namespace std;
int find_srt(int *arr,int n);
int main()
{
    int n,arr[100];
    cout<<"Input number of elements:";
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int x=find_srt(arr,n);
    if(x)
        cout<<"\n    Sorted";
    else
        cout<<"\n    Unsorted";
    
}
int find_srt(int *arr,int n)
{
    int small=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            return 0;
        }
    }
    return 1;
}