#include<iostream>
#include<vector>
using namespace std;

void subarraysum(vector<int> &arr,int k)
{
    int n =arr.size();
    int res = 1;
    
    for(int i=0;i<n;i++)
    {
        int curr_sum=0;
        for(int j=i;j<n;j++)
        {
            curr_sum += arr[j];
            if (curr_sum == k)
            {
                res--;
                cout<<"Got it";
                break;
            }
            
        }
    }
    if(res)   
        cout<<"Damn!"; 
}
int main()
{
    int data,k;
    
    vector<int> arr;
    vector<int> ::iterator it;
     cout<<"Enter given sum";
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
   
    subarraysum(arr,k);
    
}