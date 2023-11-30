class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        // Important Note:
        // This solution is called a Sliding Window algorithm

        unordered_map<char, int> map;
        int maxLength = 0;
        int left = 0;

        // For all characters in the array,
        for (int right = 0; right < s.length(); right++)
        {
            // If the character does not already exist,
            // Or the right pointer is less than the index of of the left pointer,
            if (map.count(s[right]) == 0 || map[s[right]] < left)
            {
                // Add the character to the map
                map[s[right]] = right;
                // Update maxLength
                maxLength = max(maxLength, right - left + 1);
            }
            // If the character does already exist,
            else
            {
                // The left pointer is shifted one over
                left = map[s[right]] + 1;
                map[s[right]] = right;
            }
        }

        return maxLength;
    }
};