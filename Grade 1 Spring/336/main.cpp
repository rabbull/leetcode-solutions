#include <iostream>
#include "Solution.h"
using namespace std;

int main() {
    Solution solution;
    vector<string> words;
    words.emplace_back("string");
    solution.palindromePairs(words);
    return 0;
}