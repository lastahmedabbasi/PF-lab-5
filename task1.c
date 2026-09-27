#include <stdio.h>

int main()
{
	float programming, mathematics, ai, attendance, average;

	printf("Enter Programming marks: ");
	scanf("%f", &programming);
	printf("Enter Mathematics marks: ");
	scanf("%f", &mathematics);
	printf("Enter AI marks: ");
	scanf("%f", &ai);
	printf("Enter attendance percentage: ");
	scanf("%f", &attendance);
	
	if (programming >= 50 && mathematics >= 50 && ai >= 50 &&
		attendance >= 75) {
		average = (programming + mathematics + ai) / 3.0f;
		printf("Status: Eligible\n");
		printf("Average marks: %.2f\n", average);

		if (average >= 90)
            printf("Performance: Outstanding\n");
        else if (average >= 80)
			printf("Performance: Excellent\n");
		else if (average >= 70)
			printf("Performance: Good\n");
		else if (average >= 60)
			printf("Performance: Satisfactory\n");
		else
			printf("Performance: Needs Improvement\n");
	} else {
		printf("Status: Not eligible\n");
		printf("Minimum requirement: 50 marks in each subject and 80%% attendance.\n");
	}

	return 0;
}
