/* Exercise 3.06: Calculating change
 * Kevin Yu, 2023
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
	int amount;
	printf("Enter amount in cents: ");
	scanf("%d", &amount);

	printf("The coins required to make %d cents are:\n", amount);

	if (amount >= 50) {
		printf("50");
		amount -= 50;
		if (amount > 0) printf(", ");
	}

	if (amount >= 20) {
		printf("20");
		amount -= 20;
		if (amount > 0) printf(", ");
	}
  
	if (amount >= 20) {
		printf("20");
		amount -= 20;
		if (amount > 0) printf(", ");
	}

	if (amount >= 10) {
		printf("10");
		amount -= 10;
		if (amount > 0) printf(", ");
	}

	if (amount >= 5) {
		printf("5");
		amount -= 5;
		if (amount > 0) printf(", ");
	}

	if (amount >= 2) {
		printf("2");
		amount -= 2;
		if (amount > 0) printf(", ");
	}

	if (amount >= 2) {
		printf("2");
		amount -= 2;
		if (amount > 0) printf(", ");
	}

	if (amount >= 1) {
		printf("1");
		amount -= 1;
		if (amount > 0) printf(", ");
	}

	printf("\n");
	return 0;
}