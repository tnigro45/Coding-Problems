#include <iostream>
#include <bits/stdc++.h>
using namespace std;



vector <int> convertBinary(int &initialNum);
int convertInt(vector<int> binary);
void displayBinary(vector<int> binary);




int main() {

	int initialNum = 0;
	cin >> initialNum;

	vector <int> binary = convertBinary(initialNum);

//	cout << initialNum << " in Binary is => ";
	
//	displayBinary(binary);
	
//	cout << "\n\nBinary Reversed: "; 
	
	reverse(binary.begin(), binary.end());
	
//	displayBinary(binary);
	
	int reverse = convertInt(binary);
	
//	cout << " => " << reverse;
	
	cout << reverse;

	return 0;
}



int convertInt(vector<int> binary){
	
	int reverse = 0;
	
	for (int i = 0; i < binary.size(); i++) {

		reverse = reverse * 2 + binary[i];
	}
	
	return reverse;
}

void displayBinary(vector<int> binary){
	
	for (int i = 0; i < binary.size(); i++) {

		cout << binary[i];
	}
}

vector <int> convertBinary(int &initialNum) {

	vector <int> temp;

	int num = initialNum;

	while (num > 0) {

		if (num % 2 == 1) {

			temp.push_back(1);

		} else if (num % 2 == 0) {

			temp.push_back(0);
		}

		num /= 2;
	}
	
	reverse(temp.begin(), temp.end());
	
	return temp;
}