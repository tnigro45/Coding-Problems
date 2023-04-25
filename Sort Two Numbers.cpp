#include <iostream>
using namespace std;

int main(){
	
	int num1 = 0;
	int num2 = 0;
	
	cin >> num1;
	cin >> num2;
	
	if (num1 > num2){
		cout << num2 << " " << num1;
	} else if (num1 < num2){
		cout << num1 << " " << num2;
	} else if (num1 == num2){
		cout << num1 << " " << num2;
	}
	
	return 0;
}