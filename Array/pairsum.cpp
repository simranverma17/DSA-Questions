#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>myvec={3,4,5,6,12,15,87};
    int n=myvec.size();
    int target=11,i=0,j=n-1;
        while(i<j){
            int pairsum = myvec[i]+myvec[j];
            if(pairsum<target){
                i++;
            }
            else if(pairsum>target){
                j--;
            }
            else {
            cout << "Pair found at indices " << i << " and " << j << " => ";
            cout << myvec[i] << " + " << myvec[j] << " = " << target << endl;
            return 0;} 
        }
        cout<< "no pair found";
        return 0;
    }