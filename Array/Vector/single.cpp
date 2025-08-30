#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> myvec;
    myvec.push_back(2);
    myvec.push_back(2);
    myvec.push_back(5);
    myvec.push_back(1);
    myvec.push_back(1);
    int ans=0;
    for (int i: myvec){
        ans = ans ^ i;
    }
    return ans;
}