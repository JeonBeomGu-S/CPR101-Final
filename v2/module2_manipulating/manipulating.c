// MANIPULATING SOURCE

// Suppress warnings related to certain functions in the CRT library.
#define _CRT_SECURE_NO_WARNINGS 
// Define the buffer size for input strings.
#define BUFFER_SIZE 80
// Include necessary declarations or definitions from "manipulating.h".
#include "manipulating.h"

//V1

// Concatenate user-entered strings until 'q' is entered.
void manipulating (void)  {
  
   // Print start message.
    printf("*** Start of Concatenating Strings Demo ***\n");

  // Declare variables for input strings.
    char   string1 [BUFFER_SIZE * 2];
    char   string2 [BUFFER_SIZE];

   // Loop until user enters 'q'.
    do {
      // Prompt the user to enter the first string.
        printf("Type the 1st string  (q - to quit) : \n");
      // Read input for string1.
        fgets (string1, BUFFER_SIZE, stdin) ;
       // Remove the newline character at the end of string1.
        string1 [strlen (string1) - 1] = '\0';
       // If input is not 'q', continue.
        if ((strcmp (string1, "q") != 0))  {
           // If the condition is true, prompt the user to enter the second string.
            printf("Type the 2nd string: \n");
          // Read input for string2.
            fgets (string2, BUFFER_SIZE, stdin);
          // Remove the newline character at the end of string2.
            string2 [strlen (string2) - 1] = '\0';
          // Concatenate string2 to the end of string1.
            strcat (string1, string2);
          // Print the concatenated string.
            printf("Concatenated string is \'%s\'\n", string1);
        }
    } while (strcmp (string1, "q") != 0); // Continue the loop until 'q' is entered.
  
  // Print end message.
    printf("*** End of Concatenating Strings Demo ***\n\n");
}

