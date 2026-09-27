#include <stdio.h>

int main()
{
	int problemType, algorithm;

	printf("Select a problem type:\n");
	printf("1. Classification\n");
	printf("2. Regression\n");
	printf("3. Clustering\n");
	printf("4. Computer Vision\n");
	printf("Enter your choice: ");
	scanf("%d", &problemType);

	switch (problemType) {
		case 1:
			printf("\nClassification algorithms:\n");
			printf("1. Logistic Regression\n2. Decision Tree\n3. KNN\n");
			printf("Enter your choice: ");
			scanf("%d", &algorithm);
			switch (algorithm) {
				case 1: printf("You selected Logistic Regression.\n"); break;
				case 2: printf("You selected Decision Tree.\n"); break;
				case 3: printf("You selected KNN.\n"); break;
				default: printf("Invalid algorithm choice.\n");
			}
			break;
		case 2:
			printf("\nRegression algorithms:\n");
			printf("1. Linear Regression\n2. Polynomial Regression\n3. SVR\n");
			printf("Enter your choice: ");
			scanf("%d", &algorithm);
			switch (algorithm) {
				case 1: printf("You selected Linear Regression.\n"); break;
				case 2: printf("You selected Polynomial Regression.\n"); break;
				case 3: printf("You selected SVR.\n"); break;
				default: printf("Invalid algorithm choice.\n");
			}
			break;
		case 3:
			printf("\nClustering algorithms:\n");
			printf("1. K-Means\n2. Hierarchical Clustering\n3. DBSCAN\n");
			printf("Enter your choice: ");
			scanf("%d", &algorithm);
			switch (algorithm) {
				case 1: printf("You selected K-Means.\n"); break;
				case 2: printf("You selected Hierarchical Clustering.\n"); break;
				case 3: printf("You selected DBSCAN.\n"); break;
				default: printf("Invalid algorithm choice.\n");
			}
			break;
		case 4:
			printf("\nComputer Vision algorithms:\n");
			printf("1. CNN\n2. YOLO\n3. R-CNN\n");
			printf("Enter your choice: ");
			scanf("%d", &algorithm);
			switch (algorithm) {
				case 1: printf("You selected CNN.\n"); break;
				case 2: printf("You selected YOLO.\n"); break;
				case 3: printf("You selected R-CNN.\n"); break;
				default: printf("Invalid algorithm choice.\n");
			}
			break;
		default:
			printf("Invalid problem type choice.\n");
	}

	return 0;
}
