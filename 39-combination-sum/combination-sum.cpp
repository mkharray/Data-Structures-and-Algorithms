class Solution {
public:
    vector<vector<int>>v;
    void helper(int target,int idx, vector<int>candidates, vector<int>&temp){
        if(target < 0)
        return;

        if(target == 0){
        v.push_back(temp);
        return;
        }
        
    
        for(int i = idx; i < candidates.size(); i++){
            temp.push_back(candidates[i]);
            helper(target-candidates[i],i, candidates, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        helper(target,0,candidates,temp);
        return v;
    }
};