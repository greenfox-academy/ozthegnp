#include <stdio.h>
#include <stdlib.h>

int main()
{
    int girls_number = 0;
    int boys_number = 12;
    int a = girls_number;
    int b = boys_number;
    if (a >= b && (a + b) > 20){
        printf( "The Party is excellent!");
    } else if (a < b && (a + b) > 20) {
        printf( "Quite cool party!");
    } else if ((a + b) < 20 && a != 0) {
        printf( "Avarge party...");
    } else if(a <= 0) {
        printf("Sausage party 8===D");
    }
    return 0;
}
/* Write a program that has two int variables girls_number, and boys_number
The first number represents the number of girls that comes to a party, the
second the boys.
It should print "The party is excellent!" if the the number of girls and
boys are equal and there are more people coming than 20

It should print "Quite cool party!"
if there are more than 20 people coming but the girl - boy ratio is not 1-1

It should print: "Average party..."
if there are less people coming than 20

It should print: "Sausage party"
if no girls are coming, regardless the count of the people
Run your program at least 3-4 times, change the variables to see the diferent outputs
*/
