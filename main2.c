#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

char *lire (FILE* fich);
int taille (FILE* fich);
int nbLignes (FILE* fich);
int trouver (FILE* fich, char* M);
int frequences (FILE* fich, char* M);
void convert(FILE* fich);

 int main () {
    // Question 1: Reading the victor_hugo-texts.txt file and returning the result in a string
    //lire("files\\victor_hugo-texts.txt");

    // Question 2:
    // printf("The number of characters in file is %d.", taille("files\\victor_hugo-texts.txt"));

    // Question 3:
     printf("Number of lines in file is %d.\n", nbLignes("files\test-file.txt"));

    // Question 5:
    // trouver("files\\test-file.txt", "Ogechi");

    // Question 6:
    // frequences("files\\test-file.txt", "Mike");

    // Question 11:
    // convert("files\\test-file.txt");
 }

// Question 1
// char* lire (FILE* fich) {
//    char *T;
//    FILE *file = fopen(fich, "r");
//    bool isRead;

//    if (file == NULL) {
//            isRead = false;
//        perror("Unable to open file.");
//    }

//    while ((T=fgetc(file)) != EOF) {
//        printf("%c", T);
//    }
//    fclose(file);
//    return T;
// }
//
// // Question 2
// int taille (FILE* fich) {
//    FILE *file = fopen(fich, "r");
//    char nextChar = getc(file);
//    int numberOfCharacters = 0;
//    bool isRead;

//    if (file == NULL) {
//            isRead = false;
//        perror("Unable to open file.");
//    }
//
//    while (nextChar != EOF) {
//        numberOfCharacters++;
//        nextChar = getc(file);
//    }
//    fclose(file);
//    return numberOfCharacters;
// }

 // Question 3
 int nbLignes (FILE* fich) {
    FILE *file = fopen(fich, "r");
    int numberOfLines = 0;
    char filename[1024];
    char character, endOfLine = '\n';
    bool isRead;

    if (file == NULL) {
        isRead = false;
        perror("Unable to open file.");
    }

    while (!feof(file)) {
        if (character == endOfLine) {
            // fgets(numberOfLines, 0, file);
            numberOfLines += 1;
        }
        character = getc(file);
    }
    if (character == endOfLine) numberOfLines += 1;
    fclose(file);
    return numberOfLines;
 }

// Question 5
//int trouver (FILE* fich, char* M) {
//    FILE * filePointer = fopen(fich, "r");
//    char* word;
//    word = M;
//    char singleLine[1024];
//    bool isRead;

//    if (filePointer == NULL) {
//            isRead = false;
//        perror("Unable to open file.");
//    }
//
//    while (!feof(filePointer)) {
//        fgets(singleLine, 1024, filePointer);
//    }
//    if (strstr(singleLine, word)){
//        printf("Word '%s' exists\n", word);
//    } else {
//        printf("Word '%s' does not exist\n", word);
//    }
//    fclose(filePointer);
//    return 0;
//}

// Question 6
//int frequences (FILE* fich, char* M) {
//    FILE * filePointer = fopen(fich, "r");
//    char* word;
//    word = M;
//    int count = 0;
//    int line = 0;
//    char singleLine[1024];
//    bool isRead;

//    if (filePointer == NULL) {
//            isRead = false;
//        perror("Unable to open file.");
//    }
//
//    while (!feof(filePointer)) {
//        line++;
//        fgets(singleLine, 1024, filePointer);
//        if (strstr(singleLine, word)){
//            count++;
//            printf("Found %d occurence%s of word '%s' in %s from line %d.\n", count, (count !=1) ? "s" : "", word, singleLine, line);
//        }
//    }
//    printf("Word '%s' occurred %d time%s.", word, count, (count !=1) ? "s" : "");
//    fclose(filePointer);
//    return count;
//}

// Question 11
//void convert(FILE* fich) {
//    FILE * file = fopen(fich, "r");
//    FILE * newFile;
//    newFile = fopen("files\\new-test-file.dat", "w");
//    char singleLine[1024];
//    bool isRead;
//
//    if (file == NULL) {
//            isRead = false;
//        perror("Unable to open file.");
//    }
//    while (!feof(file)) {
//        fgets(singleLine, 1024, file);
//        fprintf(newFile, singleLine);
//        isRead = true;
//    }
//    if (isRead == true) {
//        printf("File Read and .DAT file created successfully");
//    }
//
//    fclose(file);
//    fclose(newFile);
//    return;
//}


