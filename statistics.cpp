#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

	int nums = 0;
	int cases = 0;

	while (cin >> nums) {

		cases++;

		int input = 0;
		int min = 1000000;
		int max = -1000000;

		for (int i = 0; i < nums; i++) {

			cin >> input;

			if (min >= input) {

				min = input;
			}

			if (max <= input) {

				max = input;
			}
		}

		int range = max - min;

		cout << "Case " << cases << ": ";

		cout << min << " ";
		cout << max << " ";
		cout << range << endl;
	}

	return 0;
}