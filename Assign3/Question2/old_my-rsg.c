#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

char* random_array_


int main(){

    const char character_set[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int num_str = 10; // number of strings
    int len_str= 5; // fixed_length_of_string 

    char rand_strings[num_str][len_str];

    time_t t;
    srand(time(&t));

    for (int i = 0; i < num_str; i++){
        for (int j = 0; j < len_str; j++){
            rand_strings[i][j] = character_set[rand() % (sizeof(character_set))];
        }
    }

    for (int i = 0; i < num_str; i++){
        for (int j = 0; j < len_str; j++){
            printf("%c", rand_strings[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < len_str; i++){
            printf("%c", rand_strings[3][i]);
        } // for accessing a particular string
    printf("\n");

    printf("%s", rand_strings[0]);

    printf("\n");
    return 0;

}



