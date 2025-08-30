#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>myvec={-1,4,5,-7,6,-2,4,3,1,-1,-3};
    int currentSum=0, maxSum=INT_MIN;
    for(int i:myvec){
        currentSum=currentSum+i;
        maxSum = max(currentSum,maxSum);
        if(currentSum<0){
            currentSum=0;
        }
    }
    cout<< " Maximum subarrray sum is : "<< maxSum << endl;
    return 0;
}