#include <stdio.h>

int main(int argc, char *argv[]) {
	char unit;
	double degrees;

	printf("Enter a temperature: ");
	scanf("%lf%c", &degrees, &unit);

	if (unit == 'C') {
		double degrees_f = degrees * 9.0/5 + 32;
		printf("The temperature %.1fC converts to %.1fF\n", degrees, degrees_f);
	} else if (unit == 'F') {
		double degrees_c = (degrees - 32) * 5.0/9;
		printf("The temperature %.1fF converts to %.1fC\n", degrees, degrees_c);
	}

	return 0;
}