#include<iostream>
#include<vector>
using namespace std;
int max_normal_subarray(vector<int> &arr)
{
    int n =arr.size();
    int res= arr[0];
    int sum= arr[0];

    for (int i=1;i<n;i++)
    {
        sum = max(sum+arr[i],arr[i]);                                                           
        res = max(res,sum);
    }
    return res;
}
int min_normal_subarray(vector<int> &arr)
{
    int n=arr.size();
    int res=arr[0];
    int sum=arr[0];

    for(int i=1;i<n;i++)
    {
        sum = min(sum+arr[i],arr[i]);
        res= min(sum,res);
    }
    return res;
}
int max_circular_subarray(vector<int> &arr)
{
    int n = arr.size();
    int sum=arr[0];
    for (int i = 1; i < n; i++)
    {
        /* code */
        sum= sum + arr[i];
    }
    int temp = min_normal_subarray(arr);
    return sum-temp;
}

int max_circular_subarray_total(vector<int> &arr)
{
    int result=max(max_normal_subarray(arr),max_circular_subarray(arr));
    return result; 
}
int main()
{
    int data;
    vector<int> arr;
    vector<int> ::iterator it;
    cout<<"Enter the elemnts of the array:\n";
    while (cin>>data)
    {
        /* code */
        arr.push_back(data);
    }
    cout<<"Elements of the array is:";
    for (it = arr.begin(); it != arr.end(); it++)
    {
        cout<<*it<<" ";
    }
    int temp=max_circular_subarray_total(arr);
    cout<<" Maximum sum="<<temp;
}