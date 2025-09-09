#include <iostream>
#include <vector>
#include <set>
using namespace std;

// global set to avoid duplicate combinations
set<vector<int>> s;

void getAllCombinations(vector<int> &arr, int idx, int tar, vector<vector<int>> &ans, vector<int> &combine)
{
    // base case
    if (tar == 0)
    {
        if (s.find(combine) == s.end())
        {
            ans.push_back(combine);
            s.insert(combine);
        }
        return;
    }

    if (idx >= arr.size() || tar < 0)
        return;

    // include current element
    combine.push_back(arr[idx]);
    getAllCombinations(arr, idx, tar - arr[idx], ans, combine); // multiple include
    getAllCombinations(arr, idx + 1, tar - arr[idx], ans, combine); // single include
    combine.pop_back();

    // exclude current element
    getAllCombinations(arr, idx + 1, tar, ans, combine);
}

vector<vector<int>> combinationSum(vector<int> &arr, int target)
{
    vector<vector<int>> ans;
    vector<int> combine;
    getAllCombinations(arr, 0, target, ans, combine);
    return ans;
}

int main()
{
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> result = combinationSum(arr, target);

    cout << "Combinations that sum up to " << target << " are:\n";
    for (auto &vec : result)
    {
        cout << "";
        for (auto &num : vec)
            cout << num << " ";
        cout << "\n";
    }

    return 0;
}