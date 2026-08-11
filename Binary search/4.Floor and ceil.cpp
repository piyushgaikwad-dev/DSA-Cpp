class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int ans = n;
        while(low<=high){
            int mid=(low+high)/2;
            if (nums[mid] <= target){
                ans = nums[mid];
                low = mid+1;
            }
            else{
                high = mid+1;
            }    
        }
        return ans;
    }
};
//Same as lower bound compare with lower bound to understand.
//Also, it's asking to return a number therefore ans=nums[mid].