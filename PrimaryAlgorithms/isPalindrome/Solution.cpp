//
// Created by Karl on 2018/7/4.
//

#include <iostream>
#include "Solution.h"

bool compare(std::string::iterator p, std::string::iterator q);
bool isAlphaNumber(char c);
std::string::iterator findHead(std::string& s);
std::string::iterator findTail(std::string& s);

bool Solution::isPalindrome(std::string s) {
    if(s.empty()) {
        return false;
    }

    auto low = findHead(s);
    auto high = findTail(s);

    if (low > high) {
        return false;
    } else if (low == high) {
        return true;
    }

    while (low < high) {
        if (!compare(low, high)) {
            return false;
        } else {
            ++low;
            --high;
            while (low < high && !isAlphaNumber(*low)) {
                ++low;
            }
            while (low < high && !isAlphaNumber(*high)) {
                --high;
            }
        }
    }
    return true;
}

bool compare(std::string::iterator p, std::string::iterator q) {
    return (*p == *q) ||
           (*p >= 'a' && *p <= 'z' && *p + 'A' - 'a' == *q) ||
           (*p >= 'A' && *p <= 'Z' && *p + 'a' - 'A' == *q);
}

bool isAlphaNumber(char c) {
    return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

std::string::iterator findHead(std::string& s) {
    auto head = s.begin();
    while (head < s.end() && !isAlphaNumber(*head)) {
        ++head;
    }
    return head;
}

std::string::iterator findTail(std::string& s) {
    auto tail = s.end() - 1;
    while (tail >= s.begin() && !isAlphaNumber(*tail)) {
        --tail;
    }
    return tail;
}