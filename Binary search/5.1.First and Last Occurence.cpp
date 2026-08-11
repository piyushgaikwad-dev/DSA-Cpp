class Solution {
public:
   int lowerBound(vector<int>& nums, int target) {
        int n= nums.size();
        int low = 0, high = n-1;
        int ans =n;
        while(low<=high){
            int mid=(low + high) / 2;
            if (nums[mid]>=target){
                ans=mid;
                high= mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
int upperBound(vector<int>& nums, int target) {
        int n= nums.size();
        int low = 0, high = n-1;
        int ans =n;
        while(low<=high){
            int mid=(low + high) / 2;
            if (nums[mid]> target){
                ans=mid;
                high= mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
return ans;
}
    vector<int> searchRange(vector<int>& nums, int target){
    int n= nums.size();
    int lb = lowerBound(nums, target);
    if(lb == n || nums[lb] != target) {
        return {-1, -1};
    }
    return {lb,upperBound( nums , target) -1 };
    }
};
//To give the solution as the leetcode format you have to give the functions on the outer side of the main solution and then call function at the end with the leetcode solution format.
//Lowerbound and upperbound are copied as it is and at the end they are call at the end of the searchRange with the conditions
//Also, the -1 is because when the upperbound will do it's work it'll go one index beyond the target.