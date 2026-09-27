#include <stdio.h>

int main()
{
	int age, creditScore, existingLoan;
	double monthlyIncome;

	printf("Enter age: ");
	scanf("%d", &age);
	printf("Enter monthly income: ");
	scanf("%lf", &monthlyIncome);
	printf("Enter credit score: ");
	scanf("%d", &creditScore);
	printf("Existing loan? (1 = yes, 0 = no): ");
	scanf("%d", &existingLoan);

	if (age >= 18 && monthlyIncome > 0 &&
		creditScore >= 300 && (existingLoan == 0 || existingLoan == 1)) {
		if (monthlyIncome >= 100000 && creditScore >= 750 && existingLoan == 0) {
			printf("High approval chance.\n");
		} else if (monthlyIncome >= 75000 && creditScore >= 650 &&
				   (existingLoan == 0 || monthlyIncome >= 120000)) {
			printf("Requires manual review.\n");
		} else if (monthlyIncome >= 50000 && creditScore >= 600) {
			printf("Possibly eligible.\n");
		} else {
			printf("Rejected.\n");
		}
	} else {
		printf("Rejected.\n");
	}

	return 0;
}
