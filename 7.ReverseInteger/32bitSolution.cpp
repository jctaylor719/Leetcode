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
            // The reverse int is assigned itself plus the last digit of x
            // x is then assigned itself with the last digit removed
            // The reverse int is multiplied by 10 so that 3 -> 32 then 32 -> 321
            // While x is going backwards:     123 -> 12 then 12 -> 1 then 1 -> 0

            // Example: x = 123
            // r = 0 * 10 + 123 % 10 = 3
            // x = 123 / 10 = 12
            // Next iteration, r = 3, x = 12
            // r = 3 * 10 + 12 % 10
            // r = 30 + 2 = 32
            // x = 12 / 10 = 1
            // Next iteration: r = 32, x = 1
            // r = 32 * 10 + 1 % 10 = 321
            // x = 1 / 10 = 0
            // Now that x = 0, the while loop is over
            r = r * 10 + x % 10;
            x = x / 10;
        } 
        return r;  
    }
}; 
