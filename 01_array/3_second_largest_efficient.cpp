#include<iostream>
using namespace std;
int second_largest(int *arr, int n);
int main()
{
    int n,arr[100];
    cout<<"Input number of elements:\n";
    cin>>n;
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x= second_largest(arr,n);
    if(x==-1)
        cout<<"second largest element not found ";
    else
        cout<<"Second largest index="<<x;

}


int second_largest(int *arr,int n)
{
    int sl=-1;
    int l=0;
    for(int i=1;i<n;i++)
    {
        if (arr[i]>arr[l])
        {
            /* code */
            sl=l;
            l=i;
        
        }
        else if(arr[i]!= arr[l])
        {
            if (sl== -1 || arr[i]>arr[sl])
            {
                /* code */
                sl=i;
            }
        }
        
        
    }
       return sl;
}