#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,6,4,9,1};
    int n=5, target=4, i, flag=0;
    for(i=0;i<n;i++){
        if(target==arr[i]){
            cout<<"Element found at index :"<<i<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Element not found"<<endl;
    }
}    