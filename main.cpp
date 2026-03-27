#include <iostream>
#include "system_logic.h"
#include "system_logic.cpp"

using namespace std;

int main() {
	int inputOne = 1;
	int inputTwo = 0;

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

	inputOne = changeSystem(inputOne);
	inputTwo = changeSystem(inputTwo);

	int newResult = evaluateSystem(inputOne,inputTwo);

	cout << "inputOne = " << inputOne << endl;
	cout << "inputTwo = " << inputTwo << endl;
	cout << "New Result = "   << newResult << endl;

	cout << "New output is: " << endl;

	if(newResult == LIGHTS_ON) {
		cout << "LIGHTS ON";
	}
	else if(newResult == LIGHTS_BLINK) {
		cout << "LIGHTS BLINKING";
	}
	else if(newResult == STOP) {
		cout << "STOP";
	}
	else cout << "ERROR";

	return 0;
}