#include <iostream>
using namespace std;

int getDigits(int num);

int main(){
	
	int num;
	cin >> num;
	
	int length = getDigits(num);
	
	// case for any number below 149
	if (num < 149){
		cout << "99";
		
		// case for number over 48 and up
	} else if (num % 100 > 48){
			cout << num / 100 << "99";

	// if it's 48 or less
	} else{
		cout << (num / 100) - 1 << "99";
		}
	}
//	
//	if ((num >= 1) && (num < 99)){
//		cout << 99;
//		
//	} else if (num < (length * 100) - 1){
//		cout << (100 * length) - 1;
//		
//	} else if (num >){
//		
//		
//	}	else if (num == 10000){
//		cout << 9999;
//	}
	
	return 0;
}

int getDigits(int num){
	int count = 0;
	
	while (num != 0){
		num = num / 10;
		count++;
	}
	
	return count;
}