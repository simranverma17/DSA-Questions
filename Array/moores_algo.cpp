#include<iostream>
#include<vector>
using namespace std;

int moore(vector<int>myvec){

    vector<int>frequency;
    int freq=0, n=myvec.size(), ans=0;
    for(int i=0;i<n;i++){
        if(freq == 0){
            ans=myvec[i];
        }
        else if(ans == myvec[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}


int main(){
    vector<int>myvec={1,2,2,1,1,1};
    int frequency=moore(myvec);
    cout<<"Majority Element is :" <<frequency;
} 


