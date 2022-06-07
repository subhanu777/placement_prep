#include<iostream>
using namespace  std;
void max_diff(int *arr,int n)
{
    int max_diff= -10000000;
    int min_ele= arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]-min_ele>max_diff)
        {
            max_diff=arr[i]-min_ele;

        }
        if (arr[i]<min_ele)
        {
            min_ele=arr[i];
        }
        
    }
    cout<<" "<<max_diff
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