#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LENGTH 100 // maximum length of string
#define MIN_LENGTH 10 // minimum length of string

int main() {
    int n, m, i, j;
    char string[MAX_LENGTH];

    printf("Enter number of strings to generate: ");
    scanf("%d", &n);

    printf("Enter length of each string: ");
    scanf("%d", &m);

    srand(time(NULL)); // initialize random seed

    char string_array[n][MAX_LENGTH]; // array to store generated strings

for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
        string[j] = 'a' + rand() % 26; // generate random character from A to Z
        }
    string[m] = '\0'; // terminate string with null character
    strcpy(string_array[i], string); // copy generated string to array
    }

    // print out generated strings
    printf("Generated strings: \n");
    for (i = 0; i < n; i++) {
        printf("%s\n", string_array[i]);
    }

return 0;
}