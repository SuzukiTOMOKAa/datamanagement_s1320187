#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    printf("Rolling dice...\nDie 1: %d\nDie 2: %d\nTotal value: %d\n", die1, die2, die1 + die2);
    return 0;
}
