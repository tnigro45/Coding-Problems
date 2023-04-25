#include <bits/stdc++.h>
using namespace std;

// #include <string>
	// has the means to convert strings to ints
			// with stoi(insert string here)
			
// #include <bits/stdc++.h>
	// has all libraries for c++

int main(){
	
	// n = number of students
	// k = throw commands
	int n, k;
	cin >> n >> k;
	
	// creates a vector that holds the throw commands in ints
	vector<int> commands;
	
	// loop to go through the commands and store them into the vector
	for (int i = 0; i < k; i++){
		
		// holds the command, since in case it is not an int
		string s;
		
		// stores the value of the throw command that isn't undo
		int v;
		
		// reads in the string of the command
		cin >> s;
		
		// checks if the first element in the string is a 'u', which 
		// would mean it's the word undo and need the int following it
		if (s[0] == 'u'){
			cin >> v;
			
			// deletes the undo from the vector, since it's not important,
			// the value behind it is
			while (v--) commands.pop_back();
			
			// if the value isn't undo but an actual valid input
		} else{
			
			// turns the string to an int with the "string to int" function
			// since the vector can store only ints
			v = stoi(s);
			
			// pushes the command int into the vector
			commands.push_back(v);
		}
	}
	
	// accumulate is a function that calculates the sum, stored
	// into the int result
		// faster than using a for loop sum
		
	// starting value is 0
	// first item in vector gets added to 0 and iterates like normal for loop
	// last item in vector is the last item to iterate up until
	// % n is the wrap around (goes from 4 to like 2)	
	
	int res = accumulate(commands.begin(), commands.end(), 0) % n;
	
	// fixes a negative modulus result
	if (res < 0) res +=n;
	
	// displays the result
	cout << res << endl;
	
	return 0;
}