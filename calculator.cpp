#include "calculator.h"

int add(int first, int second) {
	return first + second;
}

int add(int numbers[], int count) {
	int sum = 0;

	for(int i = 0; i < count; i++) {
		sum += numbers[i];
	}

	return sum;
}