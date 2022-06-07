#include<iostream>
#include<vector>
using namespace std;
void max_subarray_evenodd(vector<int> &arr)
{
    int n=arr.size();
    int max_s=1;
    for(int i=1;i<n;i++)
    {
        int sum=1;
        if((arr[i]%2==0 && arr[i-1]%2==0) || (arr[i]%2!=0 && arr[i-1]%2!=0))
        {
            sum++;
        }
        else
            break;
        max_s=max(max_s,sum);
    }
    cout<<"\n Max length="<<max_s;
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
    max_subarray_evenodd(arr);
    
}