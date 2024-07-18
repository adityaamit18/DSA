#include<bits/stdc++.h>
using namespace std;


//Brute
 /* 
int twoSum(int nums[], int n,int target) {
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) { 
                    return {i, j};
                    //return "YES";
                    //return {nums[i], nums[j]};
                }
            }
        }
        return {};
        //return "No";
    }

*/

//Better using hashing
vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> mpp; 
    int n = nums.size(); 
    for (int i = 0; i < n; i++) {
        int num = nums[i];
        int moreNeeded = target - num; 

        if (mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i};
            //return {moreNeeded, num};
            //return "YES";

        }

        // Store the current element and its index in the map
        mpp[num] = i;
    }

    return {-1, -1};
}


//optimal
vector<int> twoSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end()); // Sort the array

    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == target) {
            return {nums[left], nums[right]}; // Return the elements that sum to target
        } else if (sum < target) {
            left++; // Increment left pointer to increase sum
        } else {
            right--; // Decrement right pointer to decrease sum
        }
    }

    return {}; // Empty vector if no such pair found
}


//optimal for returning index is different because we have sorted the array so the indexes have changed the og values
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    int n = nums.size();
    vector<pair<int, int>> indexedNums;

    // Create a vector of pairs where each pair contains (nums[i], i)
    for (int i = 0; i < n; ++i) {
        indexedNums.push_back({nums[i], i});
    }

    // Sort the vector of pairs based on the values (first element of pair)
    sort(indexedNums.begin(), indexedNums.end());

    // Initialize two pointers
    int left = 0, right = n - 1;

    while (left < right) {
        int sum = indexedNums[left].first + indexedNums[right].first;

        if (sum == target) {
            // If found, store the indices (second element of pair)
            result.push_back(indexedNums[left].second);
            result.push_back(indexedNums[right].second);
            break; // No need to search further
        } else if (sum < target) {
            left++; // Increment left pointer to increase sum
        } else {
            right--; // Decrement right pointer to decrease sum
        }
    }

    // Sort indices in ascending order
    sort(result.begin(), result.end());

    return result;
}


int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int nums[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target: ";
    cin >> target;

    cout << twoSum(nums, n,target) << endl;

    return 0;
}