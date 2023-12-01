// Worst Case Approach
// Time Complexity: O(N + M)

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {

        double median1 = 0;
        double median2 = 0;

        // For all elements in nums1,
        for (int i = 0; i < nums1.size(); i++)
        {
            // Add the value of the current index to the median
            median1 += nums1[i];
        }
        // Divide the sum of all the numbers by it's length to find the median
        median1 = median1 / nums1.size();

        // Same process applied to num2
        for (int j = 0; j < nums2.size(); j++)
        {
            median2 += nums2[j];
        }
        median2 = median2 / nums2.size();

        // The median of both arrays is equivalent to the sum of their medians divided by 2
        double finalMedian = (median1 + median2) / 2;
        return finalMedian;
    }
};