if (n == 0 || n == 1) 
        return n;

    long long int low = 1, high = n, ans;
    while (low <= high) {
        long long int mid = (low + high) / 2;

        // Check if mid*mid == n
        if (mid * mid == n) 
            return mid;

        // If mid*mid < n, then discard the left half
        if (mid * mid < n) {
            low = mid + 1;
            ans = mid;
        }
        // If mid*mid > n, then discard the right half
        else 
            high = mid - 1;
    }
    return ans;

// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        long long int ans=1;
        for(long long int i = 1; i*i <= n; i++) {
                ans = i;
           
        }
        return ans;
    }
};
