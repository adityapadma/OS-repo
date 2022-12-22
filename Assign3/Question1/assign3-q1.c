#include<stdion.h>
#include<stdlib.h>


// Marks = 10 + 20 + 20 + 5 + 5 = 60

/*
The dining philosophers problem contains five philosophers sitting on a round table can perform only one among two actions – eat and think. For eating, each of them requires two forks, one kept beside each person. Typically, allowing unrestricted access to the forks may result in a deadlock. (a) Write a program to simulate the philosophers using threads, and the forks using global variables.

Resolve the deadlock using the following techniques:
1. Strict ordering of resource requests, and
2. Utilization of semaphores to access the resources.
*/

// 5 Philosophers can only Eat or Think. They need 2 forks to eat. If they have both forks, they can eat. If they don't have both forks, they can think. If they have one fork, they can't do anything.

// 2 Variants of the program one with strict ordering of resource requests and the other with utilization of semaphores to access the resources

/*
    // Strict ordering of resource requests
    // 1. Philosopher 1 can only access forks 1 and 2
    // 2. Philosopher 2 can only access forks 2 and 3
    // 3. Philosopher 3 can only access forks 3 and 4
    // 4. Philosopher 4 can only access forks 4 and 5
    // 5. Philosopher 5 can only access forks 5 and 1

    // Utilization of semaphores to access the resources

    // 1. Philosopher 1 can only access forks 1 and 2
    // 2. Philosopher 2 can only access forks 2 and 3
    // 3. Philosopher 3 can only access forks 3 and 4
    // 4. Philosopher 4 can only access forks 4 and 5
    // 5. Philosopher 5 can only access forks 5 and 1

    // Two Sauce Bowls
    // Every philosopher can only eat if they have both forks and one sauce bowl
    // If they have one fork or one sauce bowl, they can't do anything
    // If they don't have any forks or sauce bowls, they can think

*/
/*
// Create threads for each philosopher
    for (int i = 0; i < 5; i++){
        pthread_create(&philosophers[i], NULL, philosopher, (void *) i);
    }

    // Wait for all philosophers to finish
    for (int i = 0; i < 5; i++){
        pthread_join(philosophers[i], NULL);
    }

    // All philosophers are thinking
    for(int i = 0; i < 5; i++){
        philosophers[i] = 0;
    }

    // All forks are available
    for(int i = 0; i < 5; i++){
        forks[i] = 0;
    }

    // All semaphores are available
    for(int i = 0; i < 5; i++){
        semaphores[i] = 0;
    }
*/

int main(){
    
    printf("Modified Dining Philosophers Problem");

    int philosophers[5] = {1, 2, 3, 4, 5}; // 5 philosophers
    int forks[5] = {1, 2, 3, 4, 5}; // 5 forks

}