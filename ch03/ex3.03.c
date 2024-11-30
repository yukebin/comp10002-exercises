/* Exercise 3.03: Quadratic equation roots
 * Kevin Yu, 2023
 */

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	double a, b, c;
	printf("Enter a b c: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	double delta = b*b-4*a*c;
	printf("Equation %.1fx^2 + %.1fx + %.1f = 0 has\n", a, b, c);

	/* case where its a horizontal line y = 0 */
	if (a == 0 && b == 0 && c == 0) {
		printf("    an infinite number of roots\n");
	}
	/* case where its a horizontal line y = c, c != 0 */
	else if (a == 0 && b == 0) {
		printf("    no real roots\n");
	}
	/* case where its a linear equation */
	else if (a == 0) {
		double x = -c/b;
		printf("    one real root: x = %.1f\n", x);
	}
	/* case where the quadratic eq has two roots */
	else if (delta > 0) {
		double x1 = (-b+sqrt(delta)) / (2*a);
		double x2 = (-b-sqrt(delta)) / (2*a);
		printf("    two real roots: x1 = %.1f, x2 = %.1f\n", x1, x2);
	} 
	/* case where the quadratic eq has one roots */
	else if (delta == 0) {
		double x = -b / (2*a);
		printf("    one real root: x = %.1f\n", x);
	} 
	/* case where the quadratic eq has no roots */
	else {
		printf("    no real roots\n");
	}

	return 0;
}