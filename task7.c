 #include <stdio.h>

int main()
{
	float confidence, requiredThreshold;

	printf("Enter model confidence (%%): ");
	scanf("%f", &confidence);

	printf("Enter required confidence threshold (%%): ");
	scanf("%f", &requiredThreshold);

	if (confidence >= 90)
		printf("Confidence level: Very High\n");
	else if (confidence >= 75)
		printf("Confidence level: High\n");
	else if (confidence >= 50)
		printf("Confidence level: Moderate\n");
	else
		printf("Confidence level: Low\n");

	if (confidence >= requiredThreshold && confidence >= 50)
		printf("Prediction: Accepted\n");
	else
		printf("Prediction: Rejected\n");

	return 0;
}
