#include <stdio.h>
#include <stdlib.h>

// Guess the number game
// including stdio.h  to use scanf(), and printf() functions
// including stdlib.h to use rand() function

int main()
{

	// Greeting
	printf("Welcome to guess the number\n===========================\n");
	int num;
	int guess;
	char choice;

	// While loop to make the user play as many times he wants
	while(1)
	{
		printf("\nI'm thinking of a number up to 100, you have to guess what it is.\n");

		// choosing a random number up to 100
		// by using the '%' operator
		// as the rand() function returns any number
		// so we divided it by 100 and take the reminder as we are sure it's between 0 and 99
		num = rand() % 100;

		// Take a guess
		printf("\nTake a guess: ");
		scanf("%d", &guess);

		// While loop to check the answer
		while(guess != num)
		{
			if(guess < num)
			{
				printf("Guess higher next time\n\n");
			}
			else
			{
				printf("Guess lower next time\n\n");
			}
			printf("Take a guess: ");
			scanf("%d", &guess);
		}

		// The loop is broken when guess is equal to num, so it's the right answer
		printf("\n!!***CONGRATULATIONS***!!\n");

		// Ask the user to play again or exit
		printf("\nPress 'q' to exit, or any other letter to play again: ");

		// Notice the whitespace in the format string which tells scanf to ignore whitespaces.
		scanf(" %c", &choice);
		if(choice == 'q')
		{
			break;
		}

	}

	printf("\nGood Bye!\n");
	return 0;
}