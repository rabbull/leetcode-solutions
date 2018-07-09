//
// Created by Karl on 2018/6/27.
//

#include <climits>
#include "Solution.h"

int Solution::lengthOfLongestSubstring(std::string s) {
    auto head = s.begin();
    auto tail = head;
    auto length = 0;
    auto max_length = INT_MIN;
    bool book[255] = {false};
    while (tail != s.end()) {
        if (book[*tail]) {
            auto tmp = head;
            while (*tmp != *tail) {
                ++tmp;
            }
            if (length > max_length) {
                max_length = length;
            }
            length -= (tmp - head) + 1;
            while (head - 1 != tmp) {
                book[*head] = false;
                ++head;
            }
        } else {
            book[*tail] = true;
            ++tail;
            length += 1;
        }
    }
    return max_length > length ? max_length : length;
}