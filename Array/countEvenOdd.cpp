#include<iostream>
using namespace std;
int main(){
    int n, i;
    int even = 0, odd = 0;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if (arr[i] % 2 == 0){
           even++;
        }
        else{
           odd++;
        }
    }
    cout<<"Number of evens : "<<even<<endl;
    cout<<"Number of oddds : "<<odd<<endl;
}
