class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0; // Initialize counters for $5 and $10 bills

        // Iterate through each customer's payment
        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                five += 1; // If the customer pays with a $5 bill, increase the count of $5 bills
            } 
            else if (bills[i] == 10) {
                if (five > 0) {
                    five -= 1; // Use a $5 bill as change
                    ten += 1;  // Add a $10 bill to the count
                } 
                else return false; // If no $5 bill is available for change, return false
            } 
            else { // The customer pays with a $20 bill
                if (ten > 0 && five > 0) {
                    ten -= 1;  // Use one $10 bill and one $5 bill as change
                    five -= 1;
                } 
                else if (five >= 3) {
                    five -= 3; // Use three $5 bills as change if no $10 bill is available
                } 
                else return false; // If neither option is available, return false
            }
        }
        return true; // If all customers received correct change, return true
    }
};
