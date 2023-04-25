#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string input;
	getline(cin, input);
	int input_length = input.length();
	
	for (int i = 0; i < input_length; i++){
		
		input[i] = tolower(input[i]);
	}	
	
	for (int i = 0; i < input_length; i++){
		
		switch(input[i]){
			
			case 'a':
				cout << '@';
			break;
				
			case 'b':
				cout << '8';
			break;
			
			case 'c':
				cout << '(';
			break;
			
			case 'd':
				cout << "|)";
			break;
			
			case 'e':
				cout << '3';
			break;
			
			case 'f':
				cout << '#';
			break;
			
			case 'g':
				cout << '6';
			break;
			
			case 'h':
				cout << "[-]";
			break;
			
			case 'i':
				cout << '|';
			break;
			
			case 'j':
				cout << "_|";
			break;
			
			case 'k':
				cout << "|<";
			break;
			
			case 'l':
				cout << '1';
			break;
			
			case 'm':
				cout << "[]\\\/[]";
			break;
			
			case 'n':
				cout << "[]\\\[]";
			break;
			
			case 'o':
				cout << '0';
			break;
			
			case 'p':
				cout << "|D";
			break;
			
			case 'q':
				cout << "(,)";
			break;
			
			case 'r':
				cout << "|Z";
			break;
			
			case 's':
				cout << "$";
			break;
			
			case 't':
				cout << "']['";
			break;
			
			case 'u':
				cout << "|_|";
			break;
			
			case 'v':
				cout << "\\\/";
			break;
			
			case 'w':
				cout << "\\\/\\\/";
			break;
			
			case 'x':
				cout << "}{";
			break;
			
			case 'y':
				cout << "`/";
			break;
			
			case 'z':
				cout << '2';
			break;
			
			default:
				cout << input[i];
			break;
		}
	}
	
	return 0;
}