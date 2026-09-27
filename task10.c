#include <stdio.h>
#include <math.h>

int main()
{
    float accuracy, confidence, modelScore;
    int datasetSize, userRole, modelStatus, permissions;
    int deploymentReady;

    printf("Enter accuracy (0-100): ");
    scanf("%f", &accuracy);

    printf("Enter confidence (0-100): ");
    scanf("%f", &confidence);

    printf("Enter dataset size: ");
    scanf("%d", &datasetSize);

    printf("Enter user role (1=Admin, 2=Developer, 3=Researcher): ");
    scanf("%d", &userRole);

    printf("Enter model status (1=Ready, 2=Testing, 3=Training): ");
    scanf("%d", &modelStatus);

    printf("Enter permissions (View=1, Train=2, Test=4, Deploy=8): ");
    scanf("%d", &permissions);

    modelScore = (accuracy + confidence) / 2;

    modelScore = round(modelScore);

    int hasDeployPermission = (permissions & 8) ? 1 : 0;

    deploymentReady = (accuracy >= 80 && confidence >= 75 && datasetSize >= 1000 &&
        modelStatus == 1 && hasDeployPermission) ? 1 : 0;

    printf("\nModel Score: %.0f\n", modelScore);

    if (deploymentReady)
    {
        printf("Deployment Status: READY\n");
    }
    else
    {
        printf("Deployment Status: NOT READY\n");
        if (accuracy < 80)
            printf("Reason: Accuracy too low\n");
        else if (confidence < 75)
            printf("Reason: Confidence too low\n");
        else if (datasetSize < 1000)
            printf("Reason: Dataset too small\n");
        else if (modelStatus != 1)
            printf("Reason: Model status is not Ready\n");
        else if (!hasDeployPermission)
            printf("Reason: No deploy permission\n");
    }

    switch (userRole)
    {
        case 1:
            printf("Role: Admin\n");
            switch (modelStatus)
            {
                case 1: printf("Status: Ready\n"); break;
                case 2: printf("Status: Testing\n"); break;
                case 3: printf("Status: Training\n"); break;
                default: printf("Status: Unknown\n");
            }
            break;

        case 2:
            printf("Role: Developer\n");
            switch (modelStatus)
            {
                case 1: printf("Status: Ready\n"); break;
                case 2: printf("Status: Testing\n"); break;
                case 3: printf("Status: Training\n"); break;
                default: printf("Status: Unknown\n");
            }
            break;

        case 3:
            printf("Role: Researcher\n");
            switch (modelStatus)
            {
                case 1: printf("Status: Ready\n"); break;
                case 2: printf("Status: Testing\n"); break;
                case 3: printf("Status: Training\n"); break;
                default: printf("Status: Unknown\n");
            }
            break;

        default:
            printf("Invalid role\n");
    }

    printf("\nSize of accuracy: %zu bytes\n", sizeof(accuracy));
    printf("Size of datasetSize: %zu bytes\n", sizeof(datasetSize));

    return 0;
}