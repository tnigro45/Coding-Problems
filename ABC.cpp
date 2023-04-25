#include <iostream>
using namespace std;

int main(){
	
	int inputs[3];
	
	int low = 100;
	int mid = 0;
	int high = 0;
	
	for (int i = 0; i < 3; i++){
		cin >> inputs[i];
		
		if(low >= inputs[i]){
			low = inputs[i];
		}
		
		if (high <= inputs[i]){
			high = inputs[i];
		}
	}
	
	for (int j = 0; j < 3; j++){
		if ((inputs[j] != low) && (inputs[j] != high)){
			mid = inputs[j];
		}
	}
	
	string order;
	cin >> order;
	
	for (int i = 0; i < 3; i++){
		if (order[i] == 'A'){
			cout << low;
			
		} else if (order[i] == 'B'){
			cout << mid;
			
		} else if (order[i] == 'C'){
			cout << high;
		}
		
		cout << " ";
	}
	
	return 0;
}