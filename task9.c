#include <math.h>
#include <stdio.h>

int main()
{
    printf("\nMathematical Calculator\n");
	printf("1. Square Root\n");
	printf("2. Power\n");
	printf("3. Absolute Value\n");
	printf("4. Floor\n");
	printf("5. Ceiling\n");
	printf("Enter your choice: ");
	
    int choice;
	double number, base, exponent;

	if (scanf("%d", &choice) != 1) {
		printf("Invalid menu choice.\n");
		return 1;
	}

	switch (choice) {
	case 1:
		printf("Enter a non-negative number: ");
		if (scanf("%lf", &number) != 1 || number < 0) {
			printf("Invalid input: square root requires a number >= 0.\n");
		} else {
			printf("Square root = %.2f\n", sqrt(number));
		}
		break;

	case 2:
		printf("Enter the base and exponent: ");
		if (scanf("%lf %lf", &base, &exponent) != 2) {
			printf("Invalid input for power operation.\n");
		} else {
			printf("Power = %.2f\n", pow(base, exponent));
		}
		break;

	case 3:
		printf("Enter a number: ");
		if (scanf("%lf", &number) != 1) {
			printf("Invalid input.\n");
		} else {
			printf("Absolute value = %.2f\n", fabs(number));
		}
		break;

	case 4:
		printf("Enter a number: ");
		if (scanf("%lf", &number) != 1) {
			printf("Invalid input.\n");
		} else {
			printf("Floor = %.2f\n", floor(number));
		}
		break;

	case 5:
		printf("Enter a number: ");
		if (scanf("%lf", &number) != 1) {
			printf("Invalid input.\n");
		} else {
			printf("Ceiling = %.2f\n", ceil(number));
		}
		break;

	default:
		printf("Invalid menu choice. Please select 1 to 5.\n");
	}

	return 0;
}
