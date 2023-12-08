class Solution
{
public:
    bool isPalindrome(int x)
    {

        // Negative numbers are never palindromes
        if (x < 0)
        {
            return false;
        }
        // Base Case: Zero
        else if (x == 0)
        {
            return true;
        }
        else
        {
            // Convert to string,
            // then find the half-way point
            string strX = to_string(x);
            int half = strX.length() / 2;

            // Check if first and last number are the same,
            // then iterate through until the halfway point (end)
            for (int i = 0; i < half; i++)
            {
                if (strX[i] != strX[strX.length() - 1 - i])
                {
                    return false;
                }
            }

            return true;
        }
    }
};
