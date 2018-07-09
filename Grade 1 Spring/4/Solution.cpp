//
// Created by karl on 18-6-21.
//

#include "Solution.h"

using namespace std;

double findMedian(vector<int> &nums, unsigned long low, unsigned long high);

double Solution::findMedianSortedArrays(vector<int> & nums1, vector<int> & nums2) {
    auto m1 = findMedian(nums1, 0, nums1.size());
    auto m2 = findMedian(nums2, 0, nums2.size());

    unsigned long low1 = 0, low2 = 0;
    unsigned long high1 = nums1.size();
    unsigned long high2 = nums2.size();

    while (true) {
        if (m1 == m2) {
            return m1;
        } else {
            if (m1 < m2) {
                low1 = 
                m1 = findMedian(nums1, low1, high1);
            } else {

            }
        }
    }
}

double findMedian(vector<int> &nums, unsigned long low, unsigned long high) {
    auto size = high - low;

    if (size | 1) {
        return nums.at(low + size / 2);
    } else {
        return (nums.at(low + size / 2) + nums.at(low + size / 2 - 1)) / 2.0;
    }
}