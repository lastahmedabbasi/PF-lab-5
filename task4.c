#include <stdio.h>

int main()
{
	int category, choice;

	printf("Rule-Based AI Chatbot\n");
	printf("1. Greeting\n");
	printf("2. Study\n");
	printf("3. Weather\n");
	printf("4. Help\n");
	printf("Select a conversation category: ");
	scanf("%d", &category);

	switch (category) {
	case 1:
		printf("\nGreeting options:\n");
		printf("1. Hello\n2. How are you\n3. Goodbye\n");
		printf("Select an option: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("Chatbot: Hello! Nice to meet you.\n");
			break;
		case 2:
			printf("Chatbot: I am fine, thank you. How are you?\n");
			break;
		case 3:
			printf("Chatbot: Goodbye! Have a great day.\n");
			break;
		default:
			printf("Chatbot: Invalid greeting option.\n");
		}
		break;

	case 2:
		printf("\nStudy options:\n");
		printf("1. Programming\n2. Mathematics\n3. AI\n");
		printf("Select an option: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("Chatbot: Programming teaches you how to solve problems with code.\n");
			break;
		case 2:
			printf("Chatbot: Mathematics develops logical and analytical thinking.\n");
			break;
		case 3:
			printf("Chatbot: AI enables computers to learn and make decisions.\n");
			break;
		default:
			printf("Chatbot: Invalid study option.\n");
		}
		break;

	case 3:
		printf("\nWeather options:\n");
		printf("1. Today\n2. Tomorrow\n3. Forecast\n");
		printf("Select an option: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("Chatbot: Today's weather is pleasant.\n");
			break;
		case 2:
			printf("Chatbot: Tomorrow's weather is expected to be mild.\n");
			break;
		case 3:
			printf("Chatbot: The forecast shows partly cloudy weather.\n");
			break;
		default:
			printf("Chatbot: Invalid weather option.\n");
		}
		break;

	case 4:
		printf("\nHelp options:\n");
		printf("1. About Chatbot\n2. Commands\n3. Exit\n");
		printf("Select an option: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("Chatbot: I am a simple rule-based chatbot.\n");
			break;
		case 2:
			printf("Chatbot: Select a category, then select one of its options.\n");
			break;
		case 3:
			printf("Chatbot: Exiting. Goodbye!\n");
			break;
		default:
			printf("Chatbot: Invalid help option.\n");
		}
		break;

	default:
		printf("Chatbot: Invalid conversation category.\n");
	}

	return 0;
}