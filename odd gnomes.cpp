#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	// get amount of groups of gnomes
	int testCases;
	cin >> testCases;
	
	// load the vector with gnomes
	while (testCases--){
		int n;
		cin >> n;
		vector<int>nums(n);
		
		for (auto &num : nums){
			cin >> num;
		}
		
		// find the king gnome (it's out of place if it's not
		// 1 bigger than the previous number)
		for (int i = 1; i < n; ++i){
			if (nums[i] != nums[ i - 1] + 1){
				cout << i + 1 << endl;
				break;
			}
		}
	}
	
	return 0;
}