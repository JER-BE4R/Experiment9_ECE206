#include <iostream>
#include "system_logic.h"
#include "system_logic.cpp"

using namespace std;

int main() {
	int inputOne = 0;
	int inputTwo = 1;


	int result = evaluateSystem(inputOne,inputTwo);

	cout << "inputOne = " << inputOne << endl;
	cout << "inputTwo = " << inputTwo << endl;
	cout << "Result = "   << result << endl;



	if(result == LIGHTS_ON) {
		cout << "LIGHTS ON";
	}
	else if(result == LIGHTS_BLINK) {
		cout << "LIGHTS BLINKING";
	}
	else if(result == STOP) {
		cout << "STOP";
	}
	else cout << "ERROR";


	cout << endl;

//hello world this is a testing branch test

	return 0;
}