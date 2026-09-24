class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(); // \U0001f525 EDITED: replaced sizeof with nums.size()

        long long maxi = LONG_MIN; 
        long long sum = 0;

        int start = 0;
        int ansStart = -1, ansEnd = -1;
        for (int i = 0; i < n; i++) {
        
            sum += nums[i]; // \U0001f525 EDITED: now actually add nums[i] to sum
            
            if (sum > maxi) { // \U0001f525 EDITED: moved update after adding nums[i]
                maxi = sum;
                ansStart = start;
                ansEnd = i;
            }
            if (sum < 0) { 
                sum = 0;
                start = i + 1; // \U0001f525 EDITED: fix start index when sum resets
            }
        }
        return maxi; // \U0001f525 EDITED: moved inside function
    }
};
