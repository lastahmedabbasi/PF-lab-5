#include <stdio.h>

int main()
{
	float confidence;
	char userType;

	printf("Enter recognition confidence (0-100): ");
	scanf("%f", &confidence);
	printf("Enter user type (Authorized/Unauthorized): ");
	scanf(" %c", &userType);

	if (confidence >= 80) {
		printf("Face recognized.\n");

		printf("User is %s.\n",
			   userType == 'A' ? "authorized" : "unauthorized");

		if (userType == 'A' && confidence >= 80)
			printf("Access Granted.\n");
		else
			printf("Access Denied: Unauthorized user.\n");
	} else if (confidence >= 50 && confidence < 80) {
	
		printf("Manual Verification Required.\n");
		printf("Access Denied until verification is complete.\n");
	} else {
	
		printf("Face not recognized.\n");
		printf("Access Denied: Low confidence or unauthorized user.\n");
	}

	return 0;
}
