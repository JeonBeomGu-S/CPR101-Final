//
//  main.cpp
//  cpr-v2
//
//  Created by Parisa jalali on 2024-04-12.
//
// CONVERTING MOUDLE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

//V1
void converting(void) { //V1: Convert strings to integers
printf("*** Start Of Converting Strings to int Demo ***\n"); //This line prints a message indicating the start of the conversion demo.Notify the start of the conversion demo


char intString[BUFFER_SIZE]; //This line declares a character array named intString with a size of BUFFER_SIZE to store string input.Define a character array to store string input


int intNumber; //This line declares an integer variable named intNumber to store the converted number.Define an integer variable to store the converted number


do {
    printf("Type an int numeric string (q - to quit) :\n"); //This line prints a message prompting the user to input a numeric string.Prompt the user to input a numeric string
    
    
    fgets(intString, BUFFER_SIZE, stdin); //This line reads a line of input from the standard input stream (stdin) and stores it in the intString array.Read the string input
    
    intString[strlen(intString) - 1] = '\0'; //This line removes the trailing newline character from the input string by replacing it with a null terminator (\0).Relete the newline character from the input
    
    if (strcmp(intString, "q") != 0) { //This line checks if the input string is not equal to "q", indicating that the user does not want to quit.Check if the user wants to quit
        
        intNumber = atoi(intString); //This line converts the input string to an integer using the atoi function and stores the result in the intNumber variable.Convert the string to an integer
        
        printf("Converted number is %d\n", intNumber); //This line prints the converted integer number.Print out the converted integer number
    }
    
} while (strcmp(intString, "q") != 0); //This line specifies the condition for the do-while loop to continue executing: as long as the input string is not equal to "q", indicating that the user does not want to quit.Keep repeating until the user wants to quit

printf("*** End of Converting Strings to int Demo ***\n\n"); //This line prints a message indicating the end of the conversion demo.Notify the end of the conversion demo


//v2
 
    
    printf("*** Start Of Converting Strings to double Demo ***\n"); //This line prints a message to the console, indicating the start of the conversion demo.
    
    
    char doubleString[BUFFER_SIZE]; // This declares a character array named doubleString with a size specified by BUFFER_SIZE. It is intended to store the input string provided by the user.
    
    
    double doubleNumber; // This declares a double-precision floating-point variable named doubleNumber. It will be used to store the converted number from the input string.
    
    
    do { //This line begins a do-while loop. The code inside the loop will be executed at least once and will continue to execute as long as the condition specified by the while statement is true.
        
        
        printf("Type the double numeric string (q - to quit) :\n"); // This line prints a prompt asking the user to input a numeric string. The user is instructed to enter 'q' to quit the program.
        
        
        fgets(doubleString, BUFFER_SIZE, stdin); //This line reads a line of input from the standard input (stdin) and stores it in the doubleString array. BUFFER_SIZE specifies the maximum number of characters to read.
        
        
        doubleString[strlen(doubleString) - 1] = '\0'; // This line removes the newline character (\n) from the end of the string read by fgets. It replaces the newline character with the null terminator ('\0') to mark the end of the string.
        
        
        if (strcmp(doubleString, "q") != 0) { // This line checks if the input string is not equal to "q". If the user has not entered "q", the code inside the if statement will be executed.
            
            
            doubleNumber = atof(doubleString); // This line converts the input string stored in doubleString to a double-precision floating-point number using the atof function. The converted number is then stored in the doubleNumber variable.
            
            
            printf("Converted number is %f\n", doubleNumber); // This line prints the converted double-precision floating-point number to the console.
            
        }
        
    } while (strcmp(doubleString, "q") != 0); // This line specifies the condition for the do-while loop to continue executing. The loop will continue as long as the input string is not equal to "q".
    
    
    
    printf("*** End of Converting Strings to double Demo ***\n\n"); // This line prints a message indicating the end of the conversion demo to the console.
    // test
}
