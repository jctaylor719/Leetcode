class Solution {                      
public:
    int reverse(int x) {
        int r = 0;
        // while the input integer != 0
        while(x) {
            // Check if reverse int is out of range, return 0
            if (r > INT_MAX / 10 || r < INT_MIN / 10) {
                return 0; 
            }
            // r adds from left to right,
            // x is removed from right to left
            r = r * 10 + x % 10;
            x = x / 10;
        } 
        return r;  
    }
}; 
