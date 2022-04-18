#include <vector>
#include "histogram.h"
#include <iostream>

using namespace std;

void
find_minmax(const vector<double>& numbers, double& min, double& max) {
	max = numbers[0];
	min = numbers[0];
	for (double number : numbers) {
		if (min > number) {
			min = number;
		}
		else if (max < number) {
			max = number;
		}
	}
}