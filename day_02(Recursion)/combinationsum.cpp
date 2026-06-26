class Solution {
public:
    
    void solve(vector<int>& arr, int target, int i, vector<int>& temp,
               vector<vector<int>>& ans) {

        if (i >= arr.size() || target < 0)
            return;

        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        // 3 choice hai->single time take,multiple time take, dont takek
        temp.push_back(arr[i]);
        solve(arr, target - arr[i], i + 1, temp, ans);

        
        solve(arr, target - arr[i], i, temp, ans);

        temp.pop_back();

        solve(arr, target, i + 1, temp, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {

        vector<int> temp;
        vector<vector<int>> ans;

        int i = 0;
        solve(arr, target, i, temp, ans);
        return ans;
    }
};