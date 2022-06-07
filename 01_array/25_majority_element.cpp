#include<iostream>
#include<vector>
using namespace std;
void majority_ele(vector<int> &arr)
{
    int n= arr.size();
    int res=0;
    int count,index=-1;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>res)
            index=i;
        res= max(res,count);
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