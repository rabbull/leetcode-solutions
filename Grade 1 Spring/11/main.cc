#include <iostream>
#include <cstdlib>
#include <vector>
#include "Solution.hpp"

using namespace std;

int main(void) {
	vector<int> heights;

	int temp = 0;
	while (true) {
		cin >> temp;
		if (temp == -1) {
			break;
		}
		heights.push_back(temp);
	}
	Solution solution;
	cout << solution.maxArea(heights) << endl;
	return EXIT_SUCCESS;
}

