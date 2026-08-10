int higherBound(vector<int> arr , int n, int x) {
    int low=0,high=n-1;
    ans =n;
    while(low <=high)
        int mid=(low+high)/2;
        if(arr[mid]>x){
        ans=mid;
        high=mid-1
        }
    else{
        low=mid+1;
    }    
    return ans;
}
//The only difference in Upper Bound is on line 6( if(arr[mid]>x)) i.e. ">" unlike in the Lower Bound it's ">=".