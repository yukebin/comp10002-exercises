/* Exercise 2.08: Temperature conversion
 * Kevin Yu, 2023
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
	int degrees_f = 0;

	printf("Enter degrees F: ");
	scanf("%d", &degrees_f);

	printf("In degrees C is: %.1f\n", (degrees_f - 32) * 5.0/9);
	return 0;
}