//{ Driver Code Starts
// Initial template for C++
//Ceil lower bound 
//Floor is upper bound
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        sort(arr.begin(), arr.end());
        
    int n = arr.size();
    int floor = -1;
    int ceil = -1;

    // Finding floor
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= x) {
            floor = arr[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Finding ceil
    low = 0;
    high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            ceil = arr[mid];
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return {floor, ceil};
        
    }
    
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";

/*
#include <bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
auto ceilIt = lower_bound(a.begin(), a.end(), x);
    int ceiling = (ceilIt == a.end()) ? -1 : *ceilIt;

    // Finding the floor
    auto floorIt = upper_bound(a.begin(), a.end(), x);
    if (floorIt == a.begin()) {
        // No element less than or equal to x
        return {-1, ceiling};
    } else {
        --floorIt;
    }
    int floor = *floorIt;

    // Adjusting the ceiling and floor values
    if (ceiling < x) ceiling = -1;
    if (floor > x) floor = -1;

    return {floor, ceiling};}*/
    }
    return 0;
}
// } Driver Code Ends
