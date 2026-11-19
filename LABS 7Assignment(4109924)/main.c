/*
 * Lab 7 Assignment: Student marks and CWA calculator.
 *
 * Part 1: Read the marks of N students, print them, calculate the mean,
 *         then sort the marks in ascending order.
 * Part 2: Using a table of course credits and scores, print each score's
 *         grade and calculate the Cumulative Weighted Average (CWA):
 *
 *             CWA = sum(credit * score) / sum(credit)
 */
#include <stdio.h>
#include <stdlib.h>

char grade(float score);

int main()
{
    int length;
    float sum = 0;
    float mean;
    float temp = 0;

    /* ---------------- Part 1: class marks ---------------- */

    printf("Please Enter The Number Of students In Class\n ");
    scanf("%d", &length);

    float marks[length];

    printf("\n Please Begin Entering Your Marks!\n ");
    for (int i = 0; i < length; i++) {
        printf("\nStudent %d:\t", i + 1);
        scanf("%f", &marks[i]);
    }
    printf("\n");

    for (int i = 0; i < length; i++) {
        printf("(Student %d: %.2f)\n", i + 1, marks[i]);
        sum += marks[i];
    }

    mean = sum / length;
    printf("The mean mark of the students is %.2f\n", mean);

    /* Sort the marks in ascending order */
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (marks[i] > marks[j]) {
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }

    printf("\nSorted Marks: ");
    for (int i = 0; i < length; i++)
        printf("%.2f ", marks[i]);
    puts("\n");

    /* ---------------- Part 2: CWA ---------------- */

    /* { credit, score } for each course */
    float studentResults[7][2] = {
        { 3, 57.45 },
        { 2, 69.29 },
        { 2, 71.32 },
        { 4, 65.05 },
        { 3, 75.67 },
        { 3, 48.65 },
        { 1, 88.21 }
    };

    puts("\nCREDIT\t|SCORE\t|GRADE\t|");
    puts("\t|\t|\t|");

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%.2f \t|", studentResults[i][j]);
            if (j % 2 == 1) {
                printf("%c \t|", grade(studentResults[i][j]));
                printf("\n\t|\t|\t|");
            }
        }
        printf("\n");
    }

    float weightedsum = 0;
    float totalcredits = 0;
    for (int i = 0; i < 7; i++) {
        weightedsum  += studentResults[i][0] * studentResults[i][1];
        totalcredits += studentResults[i][0];
    }

    float cwa = weightedsum / totalcredits;
    printf("\ncwa = %.2f\n", cwa);

    return 0;
}

/* Converts a score to a letter grade */
char grade(float score)
{
    if (score >= 70) return 'A';
    if (score >= 60) return 'B';
    if (score >= 50) return 'C';
    if (score >= 40) return 'D';
    return 'F';
}
