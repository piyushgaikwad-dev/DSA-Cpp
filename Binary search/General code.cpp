int search (vector<int> & nums,int target) {
    int n =nums.size();
    int low =0,high=n-1;
    while(low <=high) {
        int mid=(low +high)/2;
        if (nums[mid]==target) return mid;
        else if(target > nums[mid]) low = mid +1;
        else high = mid-1;
    }
    return -1;
}
//This is general code for binary search and to this code only any variations will be carried out in ordre to solve any problems.