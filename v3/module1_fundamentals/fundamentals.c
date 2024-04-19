// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE		80
#define NUM_INPUT_SIZE  10
#include "fundamentals.h"

// Definition of the fundamentals function.
void fundamentals(void) {

	// V1

		 // Print a message indicating the start of the demo.
	printf("*** Start of Indexing Strings Demo ***\n");

	// Declare character arrays for storing input and numerical input
	char	buffer1[BUFFER_SIZE];
	char	numInput[NUM_INPUT_SIZE];

	/* Declare a variable to store the position
	of the character within the string*/
	size_t	position;

	/* Start a do-while loop to repeatedly
	prompt for input until 'q' is entered*/
	do {

		// Prompt the user to input a non-empty string
		printf("Type not empty string (q - to quit):\n");

		// Read a string from standard input and store it in buffer1
		fgets(buffer1, BUFFER_SIZE, stdin);

		// Replace the newline character at the end of the string with null terminator
		buffer1[strlen(buffer1) - 1] = '\0';

		// If the input string is not 'q', proceed with character indexing
		if (strcmp(buffer1, "q") != 0) {

			// Prompt the user to input the character position within the string
			printf("Type the character position within the string:\n");

			/*Read the character position input from standard
			input and store it in numInput*/
			fgets(numInput, NUM_INPUT_SIZE, stdin);

			// Replace the newline character at the end of the input with null terminator
			numInput[strlen(numInput) - 1] = '\0';

			// Convert the numerical input string to an integer
			position = atoi(numInput);

			// If the position entered is greater than or equal to the string length, adjust it
			if (position >= strlen(buffer1)) {
				position = strlen(buffer1) - 1;
				printf("Too big... Position reduced to max. availbale\n");
			}

			// Print the character found at the specified position within the string
			printf("The character found at %d position is \'%c\'\n",
				(int)position, buffer1[position]);
		}
	} while (strcmp(buffer1, "q") != 0);

	// Print a message indicating the end of the demo.
	printf(" ***End of Indexing Strings Demo ***\n\n");

	// V2

	 // Print a message indicating the start of the demo.
	printf("*** Start of Measuring Strings Demo ***\n");

	// Declare a second buffer for this part of the demo
	char buffer2[BUFFER_SIZE];

	do {
		// Prompt for a string, quit with 'q'
		printf("Type a string (q - to quit) :\n");

		// Read user input into buffer2
		fgets(buffer2, BUFFER_SIZE, stdin);

		// Clean the newline character.
		buffer2[strlen(buffer2) - 1] = '\0';

		// If not quitting, print the length of the input string
		if (strcmp(buffer2, "q") != 0)

			printf("The length of \'%s\' is %d characters\n",
				buffer2, (int)strlen(buffer2));
	} while (strcmp(buffer2, "q") != 0);
	// Loop until the user inputs 'q'.


	// Print a message indicating the end of the demo.
	printf("*** End of Measuring Strings Demo ***\n\n");


	// V3 
	// This section shows how to copy a string from a source buffer to a destination buffer.
	printf("*** Start of Copying Strings Demo***\n");
	char destination[BUFFER_SIZE];
	char  source[BUFFER_SIZE];
	do {
		// Reset destination string to empty.
		destination[0] = '\0';
		printf("Destination string is reset to empty\n");

		// Prompt for the source string; quit with 'q'.
		printf("Type the source string (q - to quit) : \n");
		// Read the source string from user input
		fgets(source, BUFFER_SIZE, stdin);     

		// Clean the newline character.
		source[strlen(source) - 1] = '\0';	

		// Copy the source string to the destination buffer.
		if (strcmp(source, "q") != 0) {              

			// Copy the source string to the destination buffer
			strcpy(destination, source);        
			printf("New destination string is \'%s\'\n", destination);
		}
	} while (strcmp(source, "q") != 0); // Loop until the user inputs 'q'
	printf("*** End of Copying Strings Demo ***\n\n");

}





