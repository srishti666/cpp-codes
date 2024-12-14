#include<iostream>
#include<vector>
#include<list>
#include<set>
#include<forward_list>

using namespace std;

int main(){
    // vector<int> v={2,4,6,8,10};
    // v.push_back(20);
    // v.push_back(30);

    // v.pop_back();

    // for(int x:v)
    //     cout<<x<<endl;

    // vector<int>::iterator itr;

    // cout<<"using Iterator"<<endl;
    // for(itr=v.begin();itr!=v.end(); itr++)
    //     cout<<*itr<<endl;

    // cout<<"using for each loop"<<endl;
    // for(int x:v)
    //     cout<<x<<endl; 

//linked list
    list<int> v={2,4,6,8,10};
     v.push_back(20);
     v.push_back(30);

    list<int>::iterator itr;

    //forward list
    forward_list<int> f={2,4,6,8,10};
     f.push_front(20); //push back is not there in forward list
     f.push_front(30);

     //set
     list<int> v={2,4,6,8,10};
     v.push_back(20);
     v.push_back(30);
}

