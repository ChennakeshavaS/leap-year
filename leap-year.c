#include <stdio.h>
int main() {
	int year;
	printf("Enter a year: ");
	scanf("%d", &year);
	if (year <= 0) {
		printf("Invalid year. Enter a positive year; it cannot be 0 or negative.\n");
	} else if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		printf("It is a leap year.\n");
	} else {
		printf("It is not a leap year.\n");
	}return 0;
}
