#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float pi = 3.14;
    double super_pi = 3.14159;

    char middle_initial = 'P';
    char first_name[] = "Lyle";
    char last_name[] = "Denman";

    printf("You are %d miles away from me.\n", distance);
    printf("Pi = %f.\n", pi);
    printf("Super Pi = %f.\n", super_pi);

    printf("My middle initial is \'%c\'.\n", middle_initial);
    printf("My first name is %s.\n", first_name);
    printf("My last name is %s.\n", last_name);

    printf("My whole name is %s %c %s.\n", first_name, middle_initial, last_name);

    return 0;
}
