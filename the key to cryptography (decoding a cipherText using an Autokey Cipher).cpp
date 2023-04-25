#include <iostream>
#include <bits/stdc++.h>
using namespace std;



string decodeAutokeyCipher(string cipherText, string keyword);



int main() {

	// get user input for cipherText
	string cipherText;
	cin >> cipherText;

	// get user input for keyword to decode cipherText
	string keyword;
	cin >> keyword;
	
	// display the decoded message
	cout << decodeAutokeyCipher(cipherText, keyword);
}



// performs the decode of the cipher
string decodeAutokeyCipher(string cipherText, string keyword) {
	
	// stores the entire key, not just the keyword
	string key = keyword;
	
	// stores the decoded message
	string decodedMessage;
	
	// stores the int value of the char from the cipherText
	int cipherLetter = 0;
	
	// stores the int value of the char from the key
	int keyLetter = 0;
	
	// stores the amount of shifting needs to be done for the 
		// letter of the char according to the key
	int letterShift = 0;
	
	// stores the new letter that was decoded after the shifting
	char newLetter;
	
	// loops through and decodes the cipherText and stores it in
		// decodedMessage
	for (int i = 0; i < cipherText.length(); i++){
		
		// turns the chars into ints to shift with the key
		cipherLetter = cipherText[i] - 'A';
		keyLetter = key[i] - 'A';
		
		// shifts the letter to what it actually is
			// in number form
		letterShift = (cipherLetter - keyLetter) % 26;
		
		// check to be sure letterShift isn't less than 0
			// can't have this if it's the case
		if (letterShift < 0){
			
			letterShift += 26;
		}
		
		// turns the shift amount back into a letter
		newLetter = letterShift + 'A';
		
		// appends the new letter to the message
		decodedMessage += newLetter;
		
		// appends the new letter to the key to finish the rest
			// of the letters to decode
		key += newLetter;
	}
	
	// sends back the decoded message as a string
	return decodedMessage;
}