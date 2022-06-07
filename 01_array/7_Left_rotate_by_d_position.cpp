#include<iostream>
using namespace std;
void left_rotatebyd(int *arr,int n)
{
    int temp[n];
    int d;
    cout<<"input d:";
    cin>>d;
    for(int i=0;i<n;i++)
    {
        int x=(n-d+i)%n;
        //temp[x]=arr[i];
        swap(arr[x],arr[i]);
    }
    cout<<"The output array is:";
    
    for(int i=0;i<n;i++)
    {
        cout<<" "<<temp[i];
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
    left_rotatebyd(arr,n);
}