int firstOccurence(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            first = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return first;
}

int lastOccurence(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            last = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return last;
}

vector<int> searchRange(vector<int>& nums, int target) {
    int first = firstOccurence(nums, target);

    if (first == -1)
        return {-1, -1};

    int last = lastOccurence(nums, target);

    return {first, last};
}

int count(vector<int>& arr, int n, int x) {
    vector<int> ans = searchRange(arr, x);

    if (ans[0] == -1)
        return 0;

    return ans[1] - ans[0] + 1;
}
//The answer is similar to the prior answer just at the end we have to return the number.