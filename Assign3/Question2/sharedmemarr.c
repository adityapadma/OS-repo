#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int shmid;
    int i = 0;
    key_t key = rand();
    char (*array)[100][50];

    shmid = shmget(key, 100 * 50, IPC_CREAT | 0666);

    array = (char *)shmat(shmid, 0, 0);

    // array = malloc(sizeof(int)*count);

    for (i = 0; i < 10; i++)
    {
        strcpy(array[i], "array-values");
    }

    for (i = 0; i < 10; i++)
    {
        printf("\n%s---\n", array[i]);
    }

    printf("\nWriting to memory successful[+]\n");

    shmid = shmget(key, 1024, IPC_CREAT | 0666);

    array = (char *)shmat(shmid, 0, 0);

    for (i = 0; i < 9; i++)
    {
        printf("\n%s---\n", array[i]);
    }

    printf("\nRead to memory successful[+]\n");

    shmdt((void *)array);
    // shmctl(shmid, IPC_RMID, NULL);

    return 0;
}


/* GPT Prompt - a basic program in c which writes an array of strings in shared memory and then it reads it from there*/