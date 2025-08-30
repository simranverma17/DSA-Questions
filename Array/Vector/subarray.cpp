#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[5]={34,45,67,45,34};
    int n=5 ;
    for(int st=0; st<n; st++){
        for(int end=0; end<n; end++){
            for (int i=st; i<=end ; i++){
                cout<<arr[i];
            }
          cout<<" ";  
        }
        cout<<endl;
    }
    return 0;
}