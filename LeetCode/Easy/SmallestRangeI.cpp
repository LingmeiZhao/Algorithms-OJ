class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int mx = A[0];
        int mn = A[0];
        for(int t : A)
        {
            mx = max(t, mx);
            mn = min(t,mn);
        }
        return max(0, mx-mn-2*K);
    }
}; 
