#include <stdio.h>
#include <stdbool.h>

/*
Define the function protoypes of the funcs that I define first
This allows the function to be recognized by the compiler before it gets defined, which in turn
keeps the compiler from screaming at me...

Without this, I will need to completely define the function first before it gets used. In this case
I will need to define it before the main func...
*/
int runSampleFunc1();

int main() {
    return runSampleFunc1();
}

/*
A sample function that gets the age and displays a message continuously unless the 
exit condition is satisfied
*/
int runSampleFunc1() {
    int age;
    bool runLoop = true;    

    while (runLoop) {
        printf("\nPlease enter your age [0 = exit]: ");
        scanf("%d", &age);

        // Handle exit scenario
        if (age == 0) {
            printf("Goodbye...");
            runLoop = false;
        } else {
            // Handle valid age scenario
            if (age >= 18) {
                printf("Yaay! you are old enough to leave ur mom's basement :)");
            } else {
                printf("Oooh... Almost there bud. Come back when you are 18");
            }
        }
        printf("\n");
    }

    return 0;
}
