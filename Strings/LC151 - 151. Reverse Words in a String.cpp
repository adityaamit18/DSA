class Solution {
public:
    string reverseWords(string s) {
        int n = s.size(), i = 0;
        string ans = ""; 

        while (i < n) {
            string temp = ""; 

            // Skip leading spaces
            while (i < n && s[i] == ' ') {
                i++;
            }   

            // Collect characters of the current word
            while (i < n && s[i] != ' ') { // Continue until a space or the end of the string is found
                temp += s[i]; // Add the current character to the temporary string
                i++;
            } 

            // If the temporary string is not empty, add it to the result
            if (temp.size() > 0) {
                if (ans.size() == 0) {
                    ans = temp; // (first word)
                } else {
                    ans = temp + " " + ans; // Prepend the word to ans
                }
            }
        }
        return ans; 
    }
};
