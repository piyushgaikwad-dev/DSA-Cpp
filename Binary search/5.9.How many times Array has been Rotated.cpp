class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > nums[high]) {
                // Minimum is in the right half
                low = mid + 1;
            } else {
                // Minimum is at mid or in the left half
                high = mid;
            }
        }

        return nums[low];
    }
};
//This code needs to be updated once again.
//It's same as 5.6.Minimum in Sorted Rotated Array.