#include <stdio.h>

int main() {
    int number = 1234;
    int* number_pointer = &number;

    *number_pointer = 42;

    printf("%d", number);
    //TODO:
    // update the value of number variable to 42 using the "number_pointer"

    return 0;
}
