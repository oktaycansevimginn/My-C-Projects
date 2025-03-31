#include <stdio.h>

int main() {
    int the_biggest = -9999999; //very small integer
    int the_biggest_2 = -9999999; //very small integer
    int number,i;

    printf("Please enter 10 numbers:\n");

    for ( i=0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &number);

        if (number > the_biggest) {
            the_biggest_2 = the_biggest; 
            the_biggest = number; // new the biggest number
            
        } else if (number > the_biggest_2 && number != the_biggest) { 
            the_biggest_2 = number;
        }
    }

    printf("Second largest number: %d\n", the_biggest_2);

    return 0;
}

