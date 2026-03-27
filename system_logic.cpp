#include "system_logic.h"

const int LIGHTS_ON = 0;
const int LIGHTS_BLINK = 1;
const int STOP = 2;
const int ERROR = -1;

int evaluateSystem(int inputOne, int inputTwo) {

	if(inputOne == 0 && inputTwo == 0) {
		return STOP;
	}
	else if(inputOne == 1 && inputTwo == 0) {
		return LIGHTS_ON;
	}
	else if(inputOne == 0 && inputTwo == 1) {
		return LIGHTS_BLINK;
	}
	else {
		return ERROR;
	}

}

int changeSystem(int input) {
	if(input == 0) {
		input = 1;
	}
	else {
		input = 0;
	}

	return input;
}
