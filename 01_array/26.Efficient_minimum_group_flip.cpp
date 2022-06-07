#include<iostream>
#include<vector>
using namespace std;
void min_flip(vector<int> &arr)
{
    int n =arr.size();
    int temp=1;
    if(arr[0]==arr[n-1])
        cout<<"\n Group count differ by one\n";
    else
    {
        temp=0;
        cout<<"\n Group count is same\n";
    }
   for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!= arr[0])
                cout<<"\n From index "<<i<<" to ";
            else
                cout<<(i-1)<<"\n";

        }
    } 
    if(arr[0]!=arr[n-1])
            cout<<(n-1);  
}
int main()
{
    int data;
    
    vector<int> arr;
    vector<int> ::iterator it;
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
    min_flip(arr);
    
}