#include<iostream>
#include<vector>
using namespace std;
void majority_ele(vector<int> &arr)
{
    int n= arr.size();
    int count=1,index=0;

    for(int i=1;i<n;i++)
    {   
        if(arr[index]==arr[i])
            count++;
        else
            count--;

        if(count==0)
        {
            count=1;
            index=i;
        }
    }

    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[index]==arr[i])
            res++;        
    }
    if(res>n/2)
        cout<<"\n\n Majority index="<<index<<"\n";
    else
        cout<<"\n\n Majority index="<<-1<<"\n";

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
    majority_ele(arr);
    
}