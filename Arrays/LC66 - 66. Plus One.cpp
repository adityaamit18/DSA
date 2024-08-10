class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if (digits[i] < 9) {
                digits[i] += 1;
                return digits;  
            }
            digits[i] = 0;
        }    

        //if its 9 , we need to add a tense place for 1 an dunit place would be 0

        // Example: digits = [9, 9]
        // After first iteration (i=1): [9, 0]
        // After second iteration (i=0): [0, 0] if we did not return earlier
        // Example continued: digits = [0, 0]
        // After resizing and setting digits[0] = 1: [1, 0, 0]
        digits.resize(n+1);
        digits[0]=1;
        return digits;
        
    }
};
