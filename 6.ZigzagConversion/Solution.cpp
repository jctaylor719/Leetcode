// Time Complexity: O(n)

class Solution
{
public:
    string convert(string s, int numRows)
    {
        // Base Case: Only one row means no changes
        if (numRows <= 1)
        {
            return s;
        }

        // Initialize variables:
        vector<string> list(numRows, "");
        int index = 0;
        int step = 1;

        // For all indexes in the array,
        for (int i = 0; i < s.length(); i++)
        {

            // Visualization: 0 1 2 3 4 3 2 1 2 3 4 3 2 1
            // Increase number until we reach max, and
            // Decrease number until we reach min
            if (index == 0)
            {
                step = 1;
            }
            else if (index == numRows - 1)
            {
                step = -1;
            }
            // Append the current character from the
            // input string to the corresponding row
            list.at(index) += s.at(i);
            index += step;
        }

        string result;

        // Append lists together
        for (int i = 0; i < numRows; i++)
        {
            result += list.at(i);
        }

        return result;
    }
};