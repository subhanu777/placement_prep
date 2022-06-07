#include<iostream>
using namespace std;

class MyHash{
    int Bucket;
    list<int> *table;
    public:
        MyHash(int v);
        void insert(int key);
        void delete_ele(int key);
        void search(int key);
        void displayHash();
};

    MyHash::MyHash(int b)
    {
        this->Bucket=b;
        table = new list<int> [Bucket];

    }

    void MyHash::insert(int key)
    {
        int i= key%Bucket;
        table[i].push_back(key);
    }

    void MyHash::delete_ele(int key)
    {
        int i= key%Bucket;
        table[i].remove(key);

    }

    bool MyHash::search(int key)
    {
        int i= key%Bucket;


        for(auto x: table[i])
        {
            if(x==key)
                return true;
        }    
        return false;
    }
    void MyHash:displayHash()
    {
        for(int i=0;i<Bucket;i++)
        {
            cout<< i;
            for(auto x: table[i])
                cout<< "-->" <<x;
            cout<<endl;
        }
    }



int main()
{
    int bucket_size;
    cout<<" Enter bucket size:"
    cin>>bucket_size;
    MyHash h(bucket_size);
    cout<<"\nEnter 1 for insert 2 for search 3 for deletion:\n";
    int choice;
    cin>>choice;

    switch (choice)
    {
    case 1/* constant-expression */:
        /* code */
        cout<<"\nEnter the ele you want to insert:";
        int e1;
        cin>>e1;
        h.insert(e1);
        break;
    case 2:
        cout<<"\nEnter the ele you want to search:";
        int e2;
        cin>>e2;
        int result=h.search(e2);
        cout<<result;
        break;


    case 3:
        cout<<"\nEnter the ele you want to delete:";
        int e3;
        cin>>e3;
        h.delete_ele(e3);
        break; 
    default:
        cout<<"Nothing";
        break;
    }

}