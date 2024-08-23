class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        // Sort both the seats and students arrays
        // This ensures that we minimize the total movement by pairing the closest values
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        int diff = 0; // Variable to store the total minimum moves

        // Iterate through the sorted arrays
        for(int i = 0; i < seats.size(); i++) {
            // Calculate the absolute difference between the i-th seat and i-th student
            // This difference represents the number of moves needed to seat the student
            diff += abs(seats[i] - students[i]);
        }

        // Return the total number of moves required
        return diff;
    }
};
