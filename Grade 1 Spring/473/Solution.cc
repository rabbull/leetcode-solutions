#include "Solution.hpp"
#include <cstring>
#include <iostream>
#include <set>

bool tryCombineLength(int, const std::vector<int> &, bool[], int, int);

bool Solution::makesquare(std::vector<int> &nums) {
    int L = 0;
    for (auto e : nums) {
        L += e;
    }
    if (L % 4 != 0) {
        return false;
    }
    for (auto e : nums) {
        if (e > L / 4) {
            return false;
        }
    }

    std::cout << L << std::endl;
    return tryCombineLength(L / 4, nums, nullptr, 0, 0);
}

bool tryCombineLength(const int lengthDividedBy4, const std::vector<int> &nums, bool book[], int cnt, int currLength) {
    if (nums.empty()) {
        return false;
    }
    if (book == nullptr) {
        book = new bool[nums.size()];
        memset(book, false, nums.size());
    }

    int size = nums.size();
    int flag = 0;
    for (int i = 0; i < size; i ++) {
        flag += book[i];
    }
    if (flag) {
        std::set<int> rec;
        for (int i = 1; i < size; i++) {
            if (!book[i] && (rec.find(nums.at((unsigned) i)) == rec.end())) {
                book[i] = true;
                currLength += nums.at((unsigned) i);

                // not enough
                if (currLength < lengthDividedBy4) {
                    if (tryCombineLength(lengthDividedBy4, nums, book, cnt, currLength)) {
                        return true;
                    } else {
                        rec.insert(nums.at((unsigned) i));
                    }
                }

                // hit
                if (currLength == lengthDividedBy4) {
                    if (cnt + 1 == 4) {
                        return true;
                    } else if (tryCombineLength(lengthDividedBy4, nums, book, cnt + 1, 0)) {
                        return true;
                    } else {
                        rec.insert(nums.at((unsigned) i));
                    }
                }


                // finally
                book[i] = false;
                currLength -= nums.at((unsigned) i);
            }
        }
    }
    else {
        book[0] = true;
        if (nums.at(0) == lengthDividedBy4) {
            return tryCombineLength(lengthDividedBy4, nums, book, 1, 0);
        } else {
            return tryCombineLength(lengthDividedBy4, nums, book, 0, nums.at(0));
        }
    }
    return false;
}
