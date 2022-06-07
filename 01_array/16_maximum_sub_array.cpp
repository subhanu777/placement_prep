#include<iostream>
#include<vector>
using namespace std;
void max_subarray_count(vector<int> &arr)
{
    int n=arr.size();
    int max_s=arr[0],sum;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i+1;j<n;j++)
        {
            sum = sum+arr[j];
            max_s=max(sum,max_s);
        }
    }
    cout<<"\n Max sum="<<max_s;
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