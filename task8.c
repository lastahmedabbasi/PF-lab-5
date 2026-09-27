 #include <stdio.h>

int main()
{
	int permission;

	printf("Enter permission value: ");
	scanf("%d", &permission);

	printf("View: %s\n", (permission & 1) ? "Allowed" : "Not allowed");
	printf("Train: %s\n", (permission & 2) ? "Allowed" : "Not allowed");
	printf("Test: %s\n", (permission & 4) ? "Allowed" : "Not allowed");
	printf("Deploy: %s\n", (permission & 8) ? "Allowed" : "Not allowed");

	if ((permission & 2) && (permission & 8))
		printf("The user has both training and deployment permissions.\n");
	else
		printf("The user does not have both training and deployment permissions.\n");

	return 0;
}
