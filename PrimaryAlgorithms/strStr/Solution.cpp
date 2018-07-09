//
// Created by Karl on 2018/7/5.
//

#include <vector>
#include "Solution.h"

#define __NOT_FOUND_ -1

std::vector<int> naiveStringMatcher(std::string &text, std::string &pattern);
std::vector<int> RubinKarpStringMatcher(std::string &text, std::string &pattern);

int Solution::strStr(std::string haystack, std::string needle) {
    if (needle.empty()) {
        return 0;
    }
    auto answerList = naiveStringMatcher(haystack, needle);
    if (!answerList.empty()) {
        return answerList.front();
    } else {
        return __NOT_FOUND_;
    }
}

std::vector<int> naiveStringMatcher(std::string &text, std::string &pattern) {
    std::vector<int> answerList;
    for (unsigned i = 0; i < text.size() - pattern.size(); i++) {
        auto matched = true;
        for (unsigned j = 0; j < pattern.size(); j++) {
            if (pattern.at(j) != text.at(i + j)) {
                matched = false;
                break;
            }
        }
        if (matched) {
            answerList.push_back(i);
        }
    }
    return answerList;
}

std::vector<int> RubinKarpStringMatcher(std::string &text, std::string &pattern) {
    
}