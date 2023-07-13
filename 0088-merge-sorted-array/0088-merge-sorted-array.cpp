class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n == 0)
            return;
        
        int i2 = n-1;
        int j = m+n-1;
        int i1 = m-1;
        while(i1>=0 && i2>=0){
                if(nums2[i2] > nums1[i1] ){
                    nums1[j] = nums2[i2];
                    j--;
                    i2--;
                }
            else{
                nums1[j] = nums1[i1];
                i1--;
                j--;
            }
        }
        while(i2>=0){
            nums1[j] = nums2[i2];
            j--;
            i2--;
        }
        while(i1>=0){
            nums1[j] = nums1[i1];
            i1--;
            j--;
        }
    }
};