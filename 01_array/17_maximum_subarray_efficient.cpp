#include<iostream>
#include<vector>
using namespace std;
void max_subarray_count(vector<int> &arr)
{
    int n=arr.size();
    int max_s=arr[0],sum=arr[0];
    for(int i=1;i<n;i++)
    {
        max_s=max(max_s+arr[i],arr[i]);
        sum=max(sum,max_s);
    }


    cout<<"\n Max sum="<<sum;
}
int main()
{
    int data;
    
    vector<int> arr;
    vector<int> ::iterator it;
/*******     Giving input until a number : press any key to stop giving input  ********/
    while (cin>>data)
    {
        arr.push_back(data);
    }

    cout<<"\n Prnting the array:";
    for(it=arr.begin(); it!= arr.end();it++)
    {
        cout<< *it<<"  ";
    }
    max_subarray_count(arr);
    
}