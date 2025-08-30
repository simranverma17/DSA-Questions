#include<iostream>
#include<vector>
using namespace std;

    vector<int>pairSum(vector<int>myvec,int target){
    vector<int>ans;
    int n=myvec.size();
    int i=0,j=n-1;
        while(i<j){
            int pairsum = myvec[i]+myvec[j];
            if(pairsum<target){
                i++;
            }
            else if(pairsum>target){
                j--;
            }
            else {
                ans.push_back(myvec[i]);
                ans.push_back(myvec[j]);
                return ans;
            } 
        }
        cout<< "no pair found";
    }




int main(){
    vector<int>myvec={3,4,5,6,12,15,87};
    int target=11;
    vector<int>ans=pairSum(myvec,target);
    cout<<ans[0] << "+" << ans[1] << "=" << target;
}