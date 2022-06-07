#include<iostream>
using namespace  std;
void trapping_water(int *arr,int n)
{
    int p=0;
    for (int i = 1; i <n-1; i++)
    {
        int lmax=arr[i];
        for (int j = 0; j < i; j++)
        {
            lmax=max(lmax,arr[j]);
        }
        int rmax=arr[i];
        for (int j = i+1; j<n; j++)
        {
            rmax=max(rmax,arr[j]);
        }
        p+=(min(rmax,lmax)-arr[i]);

        
    }
    cout<<"\nMax profit  "<<p;
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
    trapping_water(arr,n);
}