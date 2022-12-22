#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>

char* rand_string(char *str, size_t size){
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if (size) {
        --size;
        for (size_t n = 0; n < size; n++) {
            int key = rand() % (int) (sizeof charset - 1);
            str[n] = charset[key];
        }
        str[size] = '\0';
    }
    return str;
}

int main(){
    char str[6];
    //print all the random strings
    for (int i = 0; i < 10; i++){
        rand_string(str, sizeof str);
        printf("%s ", str);
    }
    return 0;
}