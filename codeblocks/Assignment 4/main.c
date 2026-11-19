#include <stdio.h>
#include <stdlib.h>

/*int main(){
/*float course1;
printf("Hello there.This a simple app to get your scores and grades...");
printf("\nfor your 3 favourite courses.");

printf("\n\n\n");

printf("Kindly provide your grade for your first favourite course:");
getchar();
char course1Grade = getchar();
printf("\n Thank you. Now on to the next...\n");
printf("\n\n Kindly provide your store for your second favourite course.")
/*

/*
    return 0;
}*/

/* * EXPLANATION:
 * 1. The Problem: When a user types a character and presses 'Enter',
 * the 'Enter' key creates a newline character (\n) in the input buffer.
 * * 2. The Ghost Input: The first getchar() retrieves the letter, but
 * leaves the (\n) behind. The next getchar() immediately "sees"
 * that newline and thinks the user has already finished typing.
 * * 3. The Solution: An extra getchar() acts as a manual flush,
 * consuming the leftover newline so the next prompt can actually wait for input.
 */

int main() {
    float course1;
    char course1Grade, course2Grade;

    printf("Hello there. This is a simple app to get your scores and grades...");
    printf("\nFor your 3 favorite courses.\n\n");

    // Input for Course 1
    printf("Kindly provide your grade for your first favorite course: ");
    // The space before %c is the key: it "eats" any leftover newlines
    scanf(" %c", &course1Grade);

    printf("\nThank you. Now on to the next...\n");

    // Input for Course 2 - This will NO LONGER skip
    printf("Kindly provide your grade for your second favorite course: ");
    scanf(" %c", &course2Grade);

    // Final summary to prove it captured both
    printf("\nResults Saved: Course 1 (%c), Course 2 (%c)\n", course1Grade, course2Grade);

    return 0;
}
