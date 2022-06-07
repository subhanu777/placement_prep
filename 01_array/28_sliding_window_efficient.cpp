#include<iostream>
#include<vector>
using namespace std;
void swe(vector<int> &arr,int k)
{
    int n =arr.size();
    int res = arr[0];
    int curr_sum=0;
    for(int i=0;i<k;i++)
    {
        curr_sum +=arr[i]; 

    }   

    int max_sum= curr_sum;
    for(int i=k;i<n;i++)
    {
        curr_sum += (arr[i]-arr[i-k]);
        max_sum = max(max_sum,curr_sum);
    }
    cout<<"\n Result= "<<max_sum;
}
int main()
{
    int data,k;
    
    vector<int> arr;
    vector<int> ::iterator it;
     cout<<"Enter window size";
    cin>>k;
/*******     Giving input until a number : press any key to stop giving input  ********/
    cout<<"Enter the array:\n";
    while (cin>>data)
    {
        arr.push_back(data);
    }

    cout<<"\n Prnting the array:";
    for(it=arr.begin(); it!= arr.end();it++)
    {
        cout<< *it<<"  ";
    }
   
    swe(arr,k);
    
}