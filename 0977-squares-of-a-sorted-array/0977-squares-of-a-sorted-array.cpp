class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
  
        int l = 0; 
        int r = nums.size() - 1;
        int end = r;
        int n = nums.size();
        vector<int>v = nums;
while(end!= -1){
    if( nums[l]*nums[l] > nums[r]*nums[r])
    {
        v[end] = nums[l]*nums[l];
        l++;
        // cout<<nums[l]<<" " <<nums[r]<< " "<<nums[end+1]<<endl;
    }
    else
    {
        v[end] = nums[r]*nums[r];
        r--;
        // cout<<nums[l]<<" " <<nums[r]<< " "<<nums[end+1]<<endl;
    }
        end--;
}
        cout<<end;
     return v;
    }
};