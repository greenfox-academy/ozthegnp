
#include <stdio.h>
#include <stdlib.h>

/*
swap the values of the to number
print out first the original values then print out the swaped values
*/

int main()
{
    int x = 32;
    int y = 20;
    int temp;
    printf("x = %d, y = %d \n", x,y);
    temp = x;
    x = y;
    y = temp;
    printf("x = %d, y = %d", x,y);

    return 0;
}
