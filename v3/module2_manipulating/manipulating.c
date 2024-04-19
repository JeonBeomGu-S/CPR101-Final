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



  // V2

  // Print start message.
      printf("*** Start of Comparing Strings Demo ***\n");
  // Declare string variables
      char compare1[BUFFER_SIZE];
      char compare2[BUFFER_SIZE];
  // Declare result variable
      int result;
  // Comparison loop
      do  {
         // Prompt for first string
           printf("Type the 1st string to compare (q - to quit) :\n");
           fgets(compare1, BUFFER_SIZE, stdin);
           compare1[strlen(compare1) - 1] = '\0';
        // Check if not 'q'
          if (strcmp(compare1, "q") != 0) {
             // Prompt for second string
              printf("Type the 2nd string to compare:\n");
              fgets(compare2, BUFFER_SIZE, stdin);
              compare2[strlen(compare2) - 1] = '\0';
            // Compare strings
              result = strcmp(compare1, compare2);
             // Print comparison result
              if (result < 0)
                  printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
              else if (result == 0)
                  printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
              else
                  printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
      }
  } while (strcmp(compare1, "q") != 0);

  // Print end message
  printf("*** End of Comparing Strings Demo ***\n\n");


  // V3

  // Start the string searching demo.
      printf("*** Start of Searching Strings Demo ***\n");
  // Declare arrays for the haystack and needle strings.
      char    haystack[BUFFER_SIZE];
      char    needle[BUFFER_SIZE];
  // Variable to store the position of the needle in the haystack.
      char*    occurence = NULL;
  // Loop to get user input until they enter 'q'.
      do  {
        // Ask for a string or 'q' to quit.
          printf("Type the string (q - to quit):\n");
         // Get user input for the haystack.
          fgets(haystack, BUFFER_SIZE, stdin);
        // Remove the newline character.
          haystack[strlen(haystack) - 1] = '\0';
         // Check if input is not 'q'.
          if (strcmp(haystack, "q") != 0)  {
             // Ask for a substring.
              printf("Type the substring:\n");
            // Get user input for the needle.
              fgets(needle, BUFFER_SIZE, stdin);
             // Remove the newline character.
              needle[strlen(needle) - 1] = '\0';
             // Find the needle in the haystack.
              occurence = strstr(haystack, needle);
            // Print position if found, otherwise print "Not found".
              if (occurence)
                  printf("\'%s\' found at %d position\n", needle,
                            (int) (occurence - haystack));
              else
                  printf("Not found\n");
          }
        // Continue loop if input is not 'q'.
      } while (strcmp(haystack, "q") != 0);
  // End the string searching demo.
    printf("*** End of Searching Strings Demo ***\n\n");

}




