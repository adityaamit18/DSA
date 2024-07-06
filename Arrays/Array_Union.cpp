//for sorted arrays
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        set<int> st; //set is a data structure to store unique elements in sorted manner

      //putting elements in set from arr1
        for(int i=0;i<n;i++){
            st.insert(arr1[i]);
        }
      
        //putting elements in set from arr2
        for(int i=0;i<m;i++){
            st.insert(arr2[i]);
        }
        
        vector<int> unio; //declaring a vector to display the asnwer

        //transferring the values from set to vector unio
        for(auto it : st){
            unio.push_back(it);
        }
        return unio;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
=========================================================
