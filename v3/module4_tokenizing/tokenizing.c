// TOKENIZING MODULE SOURCE
#define CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

// V1
void tokenizing (void) {
    // print start message
    printf ("*** Start of Tokenizing Words Demo ***\n");
    // declare variables
    char words [BUFFER_SIZE];
    char* nextWord = NULL;
    int wordsCounter;
    // start loop
    do {
        // prompt the user to input a few words
        printf("Type a few words sperarated by space (q - to quit):\n");
        // input from user
        fgets(words, BUFFER_SIZE, stdin);
        // last element of array make a null
        words[strlen(words) - 1] = '\0';
        // if user input is not "q",
        if (strcmp(words, "q") != 0) {
            // tokenize the words by space
            nextWord = strtok(words, " ");
            // initialize wordCounter as 1
            wordsCounter = 1;
            // start loop
            while (nextWord) { // if there is nextWord
                // print word and increase wordCounter 1
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
                // continue to tokenize
                nextWord = strtok(NULL, " ");
            }
        }
    } while(strcmp(words, "q") != 0); // check loop condition - if input is "q", stop loop
    // print end message
    printf("*** End of Tokenizing Words Demo ***\n\n");

    // V2
    // print start message
    printf("*** Start of Tokenizing Phrases Demo ***\n");
    // declare variables
    char phrases[BUFFER_SIZE];
    char* nextPhrase = NULL;
    int phrasesCounter;
    do {
        // prompt user to input phrases
        printf("Type a few phrases separated by comma (q - to quit):\n");
        // input the phrases from user
        fgets(phrases, BUFFER_SIZE, stdin);
        // set the null end of phrases
        phrases[strlen(phrases) - 1] = '\0';
        // compare phrases with q
        if ((strcmp(phrases, "q") != 0)) {
            // tokenizing with comma
            nextPhrase = strtok(phrases, ",");
            // initialize phrases count
            phrasesCounter = 1;
            // check next phrases is exist
            while (nextPhrase) {   
                // print each phrase
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
                // set next phrase
                nextPhrase = strtok(NULL, ",");
            }
        }
    } while (strcmp(phrases, "q") != 0); // phrases compare with "q"
    // print end message
    printf("*** End of Tokenizing Phrases Demo ***\n\n");
}
