#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define STR_LEN 10  // The fixed length of the strings
#define NUM_STRINGS 50  // The number of strings in the array
#define GROUP_SIZE 5  // The number of strings sent in each group

// Generates a random string of characters of fixed length
char* generate_random_string() {
  char* str = malloc(STR_LEN + 1);  // Allocate memory for the string
  for (int i = 0; i < STR_LEN; i++) {
    // Generate a random character between 'a' and 'z'
    str[i] = 'a' + (rand() % ('z' - 'a' + 1));
  }
  str[STR_LEN] = '\0';  // Null-terminate the string
  return str;
}

// Program P1: generates an array of random strings and sends groups of strings to P2
int main() {
  srand(time(NULL));  // Seed the random number generator

# Receive a packet of strings and their ID's from P1
receive_strings(packet, ids):
  # Print the ID's and strings on the console
  for i, s in zip(ids, packet):
    print(f"ID: {i}, String: {s}")

  # Send back the highest ID received to P1 as an acknowledgement
  P1.receive_ack(max(ids))
