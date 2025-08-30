// #include<iostream>
// #include<vector>
// using namespace std;
// int majorityelement(vector<int> & myvec){
// vector <int> ans;
//     int n = myvec.size();
//     for (int val : myvec){
//         int freq = 0;
//         for(int ele : myvec){
//             if (ele == val){
//                 freq ++;  
//             }  
//         }
//         if (freq > n/2){
//             return val;
//         }
//     }
//     return -1;

// }


// int main(){
//     vector<int>myvec={2,2,2,2,1,3,4};
//     int ans=majorityelement(myvec);
//     if (ans != -1){
//     cout<<"Majority Element is :"<<ans<<endl;
//     }
//     else{
//     cout<<"Majority Element not found."<<endl;    
//     }
// }