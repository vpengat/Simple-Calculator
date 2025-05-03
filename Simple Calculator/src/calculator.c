#include <stdio.h>
#include <math.h>

void print_menu();

int main() {
	int choice;
	double first, second, result;

	while (1) {
		print_menu();
		scanf("%d", &choice);

		if (choice == 7) {
			printf("Exiting the calculator. Goodbye!\n");
			break;
		}

		printf("\nEnter the First number: ");
		scanf("%lf", &first);
		printf("Enter the Second number: ");
		scanf("%lf", &second);

		switch (choice) {
		case 1:
			result = first + second;
			break;
		case 2:
			result = first - second;
			break;
		case 3:
			result = first * second;
			break;
		case 4:
			if (second != 0)
				result = first / second;
			else {
				printf("Error! Division by zero is not allowed.\n");
				continue;
			}
			break;
		case 5:
			result = fmod(first, second);
			break;
		case 6:
			result = pow(first, second);
			break;
		default:
			printf("Invalid choice! Please enter a number between 1 and 7.\n");
			continue;
		}

		printf("\nThe result is: %.2f\n\n", result);
	}

	return 0;
}

void print_menu() {
	printf("Welcome to Vignesh's Simple Calculator\n\n");
	printf("Choose one of the following options:\n\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiply\n");
	printf("4. Division\n");
	printf("5. Modulus\n");
	printf("6. Power\n");
	printf("7. Exit\n");
	printf("\nNow enter your choice: ");
}
