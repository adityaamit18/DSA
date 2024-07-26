//occurence = last - first + 1
//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	     int low = 0;
        int high = n - 1;
        int first = -1;
        
        // Find the first occurrence of x
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x) {
                first = mid;       // x found, record the position
                high = mid - 1;    // Move to the left half to find the first occurrence
            } else if (arr[mid] < x) {
                low = mid + 1;     // Move to the right half
            } else {
                high = mid - 1;    // Move to the left half
            }
        }

        if (first == -1) {
            // If x is not found in the array
            return 0;
        }

        // Reset low and high for the second search
        low = 0;
        high = n - 1;
        int last = -1;
        
        // Find the last occurrence of x
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x) {
                last = mid;        // x found, record the position
                low = mid + 1;     // Move to the right half to find the last occurrence
            } else if (arr[mid] < x) {
                low = mid + 1;     // Move to the right half
            } else {
                high = mid - 1;    // Move to the left half
            }
        }

        // Return the count of occurrences
        return (last - first + 1);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
