/*
 * author: Karl
 * date: 2018-4-24
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int> nums1, vector<int> nums2) {

        vector<int> ans;

        if (log(nums1.size()) / log(2) < nums2.size()) {
            sort(nums1.begin(), nums1.end());
            sort(nums2.begin(), nums2.end());

            auto it1 = nums1.begin();
            auto it2 = nums2.begin();

            while (it1 != nums1.end() && it2 != nums2.end()) {
                if (*it1 == *it2) {
                    ans.push_back(*it1);
                    nums1.erase(it1);
                    nums2.erase(it2);
                } else {
                    if (*it1 < *it2) {
                        it1++;
                    } else {
                        it2++;
                    }
                }
            }
        } else {
            vector<int>::iterator it1, it2;
            it1 = nums1.begin();
            while (it1 != nums1.end()) {
                it2 = nums2.begin();
                while (it2 != nums2.end()) {
                    if (*it1 == *it2) {
                        ans.push_back(*it1);
                        nums1.erase(it1);
                        nums2.erase(it2);
                        goto nextLoop;
                    }
                    it2++;
                }
                it1++;
                nextLoop:
                continue;
            }

        }

        return ans;
    }
} solution;

int main() {
    std::cout << "intersect" << std::endl << "---------------" << endl;
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> nums1, nums2;
    for (int i = 0; i < n1; i++) {
        int tmp;
        cin >> tmp;
        nums1.push_back(tmp);
    }
    for (int i = 0; i < n2; i++) {
        int tmp;
        cin >> tmp;
        nums2.push_back(tmp);
    }
    vector<int> ans = solution.intersect(nums1, nums2);
    for (int p : ans) {
        cout << p << " ";
    }
    cout << endl;
    return 0;
}