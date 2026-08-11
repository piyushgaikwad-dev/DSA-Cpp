class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int ans = n;
        while(low<=high){
            int mid=(low+high)/2;
            if (nums[mid] >= target){
                ans = mid;
                high = mid-1;
            }
            else{
                low=mid+1;
            }    
        }
        return ans;
    }
};
//This question basically need the lowerbound code as answer.
//Also, it's asking to return index that is why we used ans=mid; if it it requires number then ans=nums[mid];