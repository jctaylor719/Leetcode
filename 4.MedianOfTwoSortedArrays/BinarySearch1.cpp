// Binary Search Approach
// Time Complexity: O(log(N+M))

// Simple and straight-forward

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int length1 = nums1.size();
        int length2 = nums2.size();

        int mid_index1 = length1 / 2;
        int mid_index2 = length2 / 2;

        // If the array is even, sum the two middle indexes and divide by two
        // Otherwise, the median is the middle index
        double median1 = (length1 % 2 == 0) ? (nums1[mid_index1 - 1] + nums1[mid_index1]) / 2.0 : nums1[mid_index1];
        double median2 = (length2 % 2 == 0) ? (nums2[mid_index2 - 1] + nums2[mid_index2]) / 2.0 : nums2[mid_index2];

        // The sum of the respective medians of n arrays divided by n is equivalent to the median of the combined n arrays
        return (median1 + median2) / 2.0;
    }
};
