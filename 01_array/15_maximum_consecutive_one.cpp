#include<iostream>
#include<vector>
using namespace std;
void maximum_consecutive_one(vector<int> &arr)
{
    int n=arr.size();
    int count=0,max_count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {    
            count++;
            max_count=max(max_count,count);
        }
        else    
            count=0;
    }
    cout<<"\nnumber of ones:"<<max_count;
}
int main()
{
    int n;
    cout<<"Enter number of elements:";
    cin>>n;

    vector<int> arr;
    vector<int> ::iterator it;
    
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        arr.push_back(data);
    }

    cout<<"\n\nYour given array is:";
    for(it = arr.begin();it != arr.end(); it++)
    {
        cout<< *it<<"  ";
    }
    maximum_consecutive_one(arr);
}