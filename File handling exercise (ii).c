#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

// Function to write a sentence to the file
void writeSentence() {
    char sentence[MAX_LENGTH];
    FILE *file = fopen("data.txt", "w");  

    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }

    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, MAX_LENGTH, stdin);
    fprintf(file, "%s", sentence);

    fclose(file);
    printf("Sentence written to file successfully.\n");
}

// Function to read the content from the file and display it
void readContent() {
    char ch;
    FILE *file = fopen("data.txt", "r"); 

    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return;
    }

    printf("Content of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}

// Function to append a second sentence to the file
void appendSentence() {
    char sentence[MAX_LENGTH];
    FILE *file = fopen("data.txt", "a");  

    if (file == NULL) {
        printf("Error opening file for appending!\n");
        return;
    }

    printf("Enter a second sentence (up to 100 characters): ");
    fgets(sentence, MAX_LENGTH, stdin);
    fprintf(file, "%s", sentence);

    fclose(file);
    printf("Second sentence appended to file successfully.\n");
}

int main() {
    // Task 1: Write a sentence to the file
    writeSentence();

    // Task 2: Read and display content of the file
    readContent();

    // Task 3: Append a second sentence to the file
    appendSentence();

    // Task 2 (again): Read and display updated content of the file
    readContent();

    return 0;
}