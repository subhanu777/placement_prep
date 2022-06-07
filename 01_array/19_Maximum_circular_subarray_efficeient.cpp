#include<iostream>
#include<vector>
using namespace std;

int max_circular_subarray(vector<int> &arr)
{
    int n= arr.size();
    int result=arr[0];
    for (int i = 0; i < n; i++)
    {
        int cur_sum= arr[i];
        int cur_max= arr[i];

        for (int j = 1; j < n; j++)
        {
                int index = (i+j)%n;
                cur_sum +=arr[index];
                cur_max = max(cur_sum,cur_max);
        }
        result= max(result,cur_max);
        
    }
    return result;
    

}
int main()
{
    int data;
    vector<int> arr;
    vector<int> ::iterator it;
    cout<<"Enter the elemnts of the array";
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
    int res=max_circular_subarray(arr);
    cout<<"Maximum Sum = "<<res;
}