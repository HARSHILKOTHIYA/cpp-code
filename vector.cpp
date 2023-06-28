#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v)
{
    vector <int>::iterator t;
    for(t=v.begin();t<v.end();t++)
    {
        cout<<*t<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>v1,v2;
    int s;
    cout<<"Enter Size of vector";
    cin>>s;
    int elem;
    vector <int>::iterator ite;

    for(int i=0;i<s;i++)
    {
        cin>>elem;
        v1.push_back(elem);
    }
    display(v1);
    
    v1.pop_back();
    display(v1);

   cout<<"First Element of this vector is : "<<v1.front()<<endl;

    cout<<"the size of vector is : "<<v1.size()<<endl;

    ite=v1.end();
    v1.insert(ite,5,555);
    v1.insert(v1.begin(),1,100);
    display(v1);

    // cout<<"Enter Size of vector"<<endl;
    // cin>>s;
    // for(int i=0;i<s;i++)
    // {
    //     cin>>elem;
    //     v2.push_back(elem);
    // }
    // display(v2);
    return 0;
}