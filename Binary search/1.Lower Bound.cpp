int lowerBound(vector<int> arr, int n, int x) {
    int low =0,high=n-1;
    int ans=n;
    while(low <=high){
        int mid=(low+high)/2;
        //may be an answer
        if(arr[mid]>=x){
            ans =mid;
            //look for even smaller index on the left
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
//LowerBound is a very important Algorithm in the binary search.
//Also have the practice to define "ans=n" or the next after the last index.