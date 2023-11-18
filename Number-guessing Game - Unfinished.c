#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void game();

int main()
{
	int choice = 0;
	do {
		//1. Get a valid number from the user.
		do
		{
			printf("Input one to play, zero to exit: ");
			scanf("%d", &choice);
		} while (choice != 0 && choice != 1);
		if (1 == choice)
		{
			//Play the game.
			game();
		}
		else
		{
			//Exit the game.
			return 0;
		}
	} while (choice);
}

void game()
{
	//1. Generate a number from 1 to 100.
	/* rand
	int rand(void)
	The rand function returns a pseudorandom number in the range 0 to RAND_MAX. Use the srand function to seed the pseudorandom number generator before calling rand.
	RAND_MAX is a hexidecimal number, 0x7fff, whose decimal equivalent is 32767. In other words, the hexidecimal number 0x7fff is defined as RAND_MAX.
	*/
	/* srand
	void srand(unsigned int seed)
	The srand function sets a random starting point.
	*/
	/* time
	time_t time(time_t *timer)
	The time function returns the time in elapsed seconds.
	*/
}