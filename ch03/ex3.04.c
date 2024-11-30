/* Exercise 3.04: Compute tomorrow's date
 * Kevin Yu, 2023
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int day, month, year;
	int nday, nmonth, nyear;
	int leapyear;

	/* Input prompt, we assume a valid date */
	printf("Enter a date in dd/mm/yyyy format: ");
	scanf("%d/%d/%d", &day, &month, &year);

	/* Check for leap year, see figure 3.2 */
	leapyear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

	/* Calculate tomorrow's date */
	nday = day, nmonth = month, nyear = year;
	if (day == 30 && 
		(month == 4 || month == 6 || month == 9 || month == 11)) {
		/* 30 days hath September, April, June, and November */
		nday = 1; nmonth = month + 1;
	} else if (day == 31 && month != 2) {
		/* all the rest have 31 */
		nday = 1; nmonth = (month + 1) % 12;
		nyear = (month == 12) ? year + 1 : year; // conditional op, see p230
	} else if ((day == 29 && month == 2 && leapyear) || 
				(day == 28 && month == 2 && !leapyear)) {
		/* except for February alone, which has 28, or 29 in a leap year */
		nday = 1; nmonth = month + 1;
	} else {
		nday = day + 1; 
	}

	printf("The date today is: %02d/%02d/%04d\n", day, month, year);
	printf("The date tomorrow is: %02d/%02d/%04d\n", nday, nmonth, nyear);
	return 0;
}