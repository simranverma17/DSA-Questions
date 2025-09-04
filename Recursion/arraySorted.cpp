#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int>vec, int n){

    if(n==0 || n==1){
        return true;
    }

    return vec[n-1]>=vec[n-2] && isSorted(vec, n-1);

}


int main(){
    vector<int>vec={1,2,3,4,5,6,7,8,9};
    int n = 9;
    cout<<isSorted(vec,n)<<endl;
}