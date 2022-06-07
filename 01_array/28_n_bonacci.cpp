#include<iostream>
using namespace std;


void nbonacci(int N,int M)
{
    int arr[100];
    for(int i=0;i<N-1;i++)
        arr[i]=0;

    arr[N-1]=1;
    for(int i=N;i<M;i++)
    {
        int sum=0;
        for(int j=i-1;j>=i-N;j--)
        {
            sum+= arr[j];
        }
        arr[i] = sum;
    }

    for(int i=0;i<M;i++)
        cout<<arr[i]<<" ";
    
}


int main()
{
    int N,M;
    cout<<"Enter N:";
    cin>>N;
    cout<<"Enter M:";
    cin>>M;

    nbonacci(N,M);
}