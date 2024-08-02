class Solution {
public:
    string removeOuterParentheses(string s) {
        string result; // To store the final result
        int count = 0; // To track the balance of parentheses
        bool flag = true; // To help skip outermost parentheses

        for (int i = 0; i < s.length(); i++) {
            // If current character is '(', increment the count
            if (s[i] == '(') {
                count++;
            } 
            // If current character is ')', decrement the count
            else if (s[i] == ')') {
                count--;
            }

            // When count is 1 and flag is true, it means we encountered the outermost '('
            if (count == 1 && flag == true) {
                flag = false; // Mark flag as false
                continue; // Skip adding this '(' to the result
            }

            // When count is 0 and flag is false, it means we encountered the outermost ')'
            if (count == 0 && flag == false) {
                flag = true; // Mark flag as true
                continue; // Skip adding this ')' to the result
            }

            // Append the character to the result if it's not an outermost parenthesis
            result += s[i];
        }

        return result; // Return the result after removing outermost parentheses
    }
};
