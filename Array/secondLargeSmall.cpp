#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    int max=arr[0], min=arr[1];
    cout<<"Enter the elements of an array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for (i=0;i<=n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }

    }
    cout<<"maximum number is: "<<max<<endl;
    cout<<"minimum number is: "<<min<<endl;
    int lmax=arr[0], smin=arr[0];
    for (i=0;i<=n;i++){
        if(arr[i]<lmax && lmax<max){
            lmax=arr[i];
        }
        else if(arr[i]>smin && smin>min){
            smin=arr[i];
        }
    }
    cout<<"second maximum number is: "<<lmax<<endl;
    cout<<"second minimum number is: "<<smin<<endl;
    
}