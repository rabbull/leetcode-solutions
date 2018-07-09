#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n) {
        auto it = flowerbed.begin();
        if (*it == 0 && *(it + 1) == 0) {
            *it = 1;
            n -= 1;
        }
        it = flowerbed.end();
        if (*(it - 1) == 0 && *(it - 2) == 0) {
            *(it - 1) = 1;
            n -= 1;
        }
        if (n <= 0) {
            return true;
        } else {
            for (it = flowerbed.begin(); it < flowerbed.end(); it++) {
                if (*it == 0) {
                    int count = 0;
                    while (true) {
                        if (it == flowerbed.end()) {
                            break;
                        }
                        if (*it == 0) {
                            count += 1;
                        } else {
                            break;
                        }
                        it++;
                    }
                    if ((n -= (count - 1) / 2) <= 0) {
                        return true;
                    } else if (it == flowerbed.end()) {
                        return false;
                    }
                }
            }
            return false;
        }
    }
} solution;

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}