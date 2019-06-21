#include <stdio.h>

double integerPower(double base, double exponent) {
	double total = base;

	for (int i = 1; i < exponent; i++) {
		total *= base;
	}

	return total;
}

int main() {
	printf("%.2lf", integerPower(2, 4));
}
