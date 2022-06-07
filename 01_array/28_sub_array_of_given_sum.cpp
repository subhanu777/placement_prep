#include<iostream>
#include<vector>
using namespace std;

void subarraysum(vector<int> &arr,int given_sum)
{
    int n =arr.size();
    int curr_sum= arr[0];

    int start=0;
    for(int end=1;end<n;end++)
    {
        while(curr_sum>given_sum && start<end-1 )
        {
            curr_sum -=arr[start];
            start++;
        }
        if(curr_sum==given_sum)
        {
            cout<<"\n\nGot it";
            break;
        }

        if (end<n)
        {
            /* code */
            curr_sum += arr[end];
        }
        
    }
    if(curr_sum==given_sum)
    {
        cout<<"\n\nGot it";
    }
    else
        cout<<"\nDAMN!";    
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