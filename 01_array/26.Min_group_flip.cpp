#include<iostream>
#include<vector>
using namespace std;
void min_group_flip(vector<int> &arr)
{
    int group0=0;
    int group1=0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            if(arr[i]==0)
                group0++;
            else    
                group1++;
        }
        if((i==n-1) &&  (arr[n-1]==arr[n-2]))
       {
            if(arr[n-1]==0)
                group0++;
            else
                group1++;
        }
    }
    if(group0<group1)
    {
        for(int i=0;i<n;)
        {
            if(arr[i]==0)
            {
                cout<<"From"<<i;
                for(int j=1;j<n;j++)
                {
                    if(arr[j]!=0)
                    {      
                        cout<<"To"<<j<<"\n";
                        break;
                    }
                    i=j;
                }
            }

        }
    }
    
    cout<<group0;
    cout<<group1;
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
    cout<<"\n";
    min_group_flip(arr);    
}