class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>big;
        vector<int>small;
        int c = 0;
        for(int i : nums){
            if(i > pivot){
                big.push_back(i);
            }
            else if(i < pivot)
                small.push_back(i);
            else
                c++;
        }
        while(c--){
            small.push_back(pivot);
        }
        for(int i : big){
            small.push_back(i);
        }
        return small;
    }
};