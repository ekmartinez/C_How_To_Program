#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main(void) 
{
	unsigned int frequency[SIZE] = {0};

	srand(time(NULL)); // seed random number generator
	
	// roll die 60,000,000 times
	for (unsigned roll = 1; roll <= 60000000; ++roll) {
		size_t face = 1 + rand() % 6;
		++frequency[face];
	}

	printf("%s%17s\n", "Face", "Frequency");

	// output frequency elements 1-6 in tabular format
	for (size_t face = 1; face < SIZE; ++face) {
		printf("%4ld%17d\n", face, frequency[face]);
	}

	return 0;
}

