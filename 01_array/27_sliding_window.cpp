#include<iostream>
#include<vector>
using namespace std;
void sw(vector<int> &arr,int k)
{
    int n =arr.size();
    int res = arr[0];
    for(int i=0;i<n-k+1;i++)
    {
        int sum=0;
        for(int j=i;j<(i+k);j++)
        {
            sum=sum+arr[j];
            res= max(sum,res);   
        }

    }   
    cout<<"\n Result= "<<res;
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
   
    sw(arr,k);
    
}