#include<iostream>
using namespace std;
int main(){
    int i, arr[5]={61,12,4,70,2};
    int max=arr[0];
    int min=arr[0];
    for (i=0;i<=5;i++){
       if(arr[i]>max){
        max=arr[i];}
        if(arr[i]<min){
        min=arr[i];}
       
    }
       cout << "Maximum value is:" << max;
       cout << "Minimum value is:" << min;
       
    
    return 0;
}