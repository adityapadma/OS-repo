#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rng(int max){

    time_t t;
    srand((unsigned) time(&t));
    int num = rand() % max+1;
    return num;
}

int main() {
    
    int num = rng(50);
}
