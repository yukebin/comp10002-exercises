/* Exercise 3.05: Calculating the day number within a year for a date
 * Kevin Yu, 2023
 */

#include <stdio.h>

#define SHORT_MONTH 30
#define LONG_MONTH  31
#define FEB_NORMAL  28

int main(int argc, char *argv[]) {
	int day, month, year;
	int leapyear;
	int days = 0;

	/* Input prompt, we assume a valid date */
	printf("Enter date in dd/mm/yyyy format: ");
	scanf("%d/%d/%d", &day, &month, &year);

	/* Check for leap year, see figure 3.2 */
	leapyear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

	/* Calculate the number of days */
	if (month > 1)  days += LONG_MONTH;
	if (month > 2)  days += FEB_NORMAL + (leapyear ? 1 : 0); // see p230
	if (month > 3)  days += LONG_MONTH;
	if (month > 4)  days += SHORT_MONTH;
	if (month > 5)  days += LONG_MONTH;
	if (month > 6)  days += SHORT_MONTH;
	if (month > 7)  days += LONG_MONTH;
	if (month > 8)  days += LONG_MONTH;
	if (month > 9)  days += SHORT_MONTH;
	if (month > 10) days += LONG_MONTH;
	if (month > 11) days += SHORT_MONTH;

	days += day;

	printf("%02d/%02d/%04d is day number %d in the year\n", 
		day, month, year, days);

	return 0;
}