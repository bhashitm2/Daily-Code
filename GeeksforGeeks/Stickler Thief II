class Solution {
  public:
    int solve(int lo, int hi, vector<int>&arr){
        int prev2=0, prev=arr[lo], curr=0;
        for(int i=lo+2; i<=hi+1; i++){
            curr=max(prev, arr[i-1]+prev2);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
  
    int maxValue(vector<int>& arr) {
        // your code here
        int n=arr.size();
        if (n == 0) return 0;
        if (n == 1) return arr[0];
        if (n == 2) return max(arr[0], arr[1]);
        return max(solve(0, n-2, arr), solve(1, n-1, arr));
    }
};
