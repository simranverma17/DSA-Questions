#include<iostream>
using namespace std;
int main(){
    int i, n, a;
    
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements"<<endl;  
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to find"<<endl;
    cin>>a;
    for(i=0;i<n;i++){
        if(arr[i]==a){
            cout<<"Element found at index : "<<i<<endl;
            break;
        }
    }
    if(arr[i]!=a){
            cout<<"Element not found "<<endl;
        }

    return 0;
}