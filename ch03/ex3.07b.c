/* Exercise 3.07b: Generalised unit converter
 * Kevin Yu, 2023
 */

#include <stdio.h>

#define CELCIUS    'C'
#define FAHRENHEIT 'F'
#define MILE       'M'
#define KILOMETER  'K'
#define POUND      'P'
#define KILOGRAM   'G'

#define FTOC_SLOPE     (5.0 / 9)
#define FTOC_INTERCEPT 32.0
#define MILES_TO_KM    1.609
#define POUNDS_TO_KG   0.454

int main(int argc, char *argv[]) {
	char unit;
	double quantity, converted;

	printf("Enter a quantity: ");
	scanf("%lf%c", &quantity, &unit);

	if (unit == CELCIUS) {
		converted = quantity * (1.0 / FTOC_SLOPE) + FTOC_INTERCEPT;
		printf("The temperature %.1fC converts to %.1fF\n", quantity, converted);
	} else if (unit == FAHRENHEIT) {
		converted = (quantity - FTOC_INTERCEPT) * FTOC_SLOPE;
		printf("The temperature %.1fF converts to %.1fC\n", quantity, converted);
	} else if (unit == MILE) {
		converted = quantity * MILES_TO_KM;
		printf("The distance %.1f miles converts to %.1f kilometers\n", quantity, converted);
	} else if (unit == KILOMETER) {
		converted = quantity / MILES_TO_KM;
		printf("The distance %.1f kilometers converts to %.1f miles\n", quantity, converted);
	} else if (unit == POUND) {
		converted = quantity * POUNDS_TO_KG;
		printf("The mass %.1f pounds converts to %.1f kilograms\n", quantity, converted);
	} else if (unit == KILOGRAM) {
		converted = quantity / POUNDS_TO_KG;
		printf("The mass %.1f kilograms converts to %.1f pounds\n", quantity, converted);
	}

	return 0;
}