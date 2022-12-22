#include <stdio.h>
#include <unistd.h>

#define MAX_LENGTH 10 // maximum length of array

int main() {

    int pipefd[2]; // array to hold pipe file descriptors
    int array[MAX_LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // array to write to pipe

    // create pipe
    if (pipe(pipefd) < 0) {
        perror("pipe");
        return 1;
    }

    // write array to pipe
    if (write(pipefd[1], array, sizeof(array)) < 0) {
        perror("write");
        return 1;
    }

    return 0;
}

/*Note: You need to handle the case where the array length exceeds the maximum length of the pipe. In that case, you can write the array elements in chunks using a loop and the write() function.*/