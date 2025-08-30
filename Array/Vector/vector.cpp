#include<iostream>
#include<Vector>
using namespace std;
int main(){
    vector<char>myvec;
    
    cout<<myvec.size()<<endl;
    myvec.push_back('a');
    myvec.push_back('b');
    myvec.push_back('c');
    myvec.push_back('d');
    myvec.push_back('e');

    cout<<"Size = "<<myvec.size()<<endl;

    for (char i : myvec){
        cout<< i << endl;
    }

    cout<<"Capacity = "<< myvec.capacity() <<endl;
    myvec.pop_back();
    myvec.pop_back();
    cout<<"Size = "<<myvec.size()<<endl;
    cout<<"Capacity = "<< myvec.capacity() <<endl;
}