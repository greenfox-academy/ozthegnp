#include <stdio.h>
#include <stdlib.h>

/*
Create a program which converts days to years, months, weeks and days
to keep it simple we say every year is 365 days long, every month is 30 days
*/

int main()
{
    int days = 3243;
    int weeks = days/7;
    int months = days/30;
    int years = days/365;

    printf(" %d days are %d weeks, %d months and %d years", days, weeks, months, years);

    return 0;
}
