class Solution {
  public:
  void generateSubset(vector<int>&arr,int indx,vector<int>&curr,vector<vector<int>>&ans){
      
      
      if(indx==arr.size()){
          ans.push_back(curr);
          return;
      }
      //pick the element
      curr.push_back(arr[indx]);
      generateSubset(arr,indx+1,curr,ans);
      
      
      //dont pick->backtrack
      curr.pop_back();
      generateSubset(arr,indx+1,curr,ans);
  }
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        vector<vector<int>> ans;
        vector<int>curr;
        
        int i=0;
        generateSubset(arr,i,curr,ans);
        return ans;
    }
};