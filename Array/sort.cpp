#include<iostream>
using namespace std;
int main(){
    int i, arr[5]={12,34,2,17,22};
    bool isSorted=true;
    for (i=0;i<5;i++){
        if(arr[i]<arr[i+1]){
            isSorted=false;
            break;
        }
    }
    if(isSorted)
    cout<<"Array is sorted in ascending order.";
    else
    cout<<"Array is not sorted in ascending order.";

    return 0;
}