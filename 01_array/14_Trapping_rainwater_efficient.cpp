#include<iostream>
#include<vector>
using namespace std;
void rain_trap_efficient(vector<int> &A)
{
    int n=A.size();
    int lmax[n],rmax[n];
    int result=0;
    lmax[0]=A[0];
    for (int i = 1; i <n; i++)
    {
        lmax[i]=max(lmax[i-1],A[i]);
    }
    rmax[n-1]=A[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rmax[i]=max(rmax[i+1],A[i]);
    }
    
    for(int i=1;i<n-1;i++)
    {
        result=result + (min(rmax[i],lmax[i])-A[i]);
    }
    cout<<"\nRain water: "<<result;
}
int main()
{
    int n;
    cout<<"\nInput the number of elements:";
    cin>>n;
    
    vector<int> arr;
    vector<int> ::iterator it;
    for (int i = 0; i <n; i++)
    {
        int data;
        cin>>data;
        arr.push_back(data);
    }
    
    /*
    vector<int> arr[n];
    vector<int> ::iterator it;
    for (int i = 0; i <n; i++)
    {
        int data;
        cin>>data;
        arr[i].push_back(data);
    }
    cout<<"\nInitial array of vectors was:";
    for(int i=0;i<n;i++ )
    {
        for (it = arr[i].begin() ; it!=arr[i].end(); it++)
        {
            cout<<*it<<" ";
        }  pri 
    }
    */
    cout<<"\nInitial array of vectors was:";
    for (it = arr.begin() ; it!=arr.end(); it++)
    {
        cout<<*it<<" ";
    }   
    rain_trap_efficient(arr);
}