/*
 * Inputs and Outputs: reads weight and height with scanf and prints the BMI.
 * BMI = weight / (height * height)
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Weight;
    float Height;
    float BMI;

    printf("Please enter your weight\n");
    scanf("%f", &Weight);

    printf("Please enter your height\n");
    scanf("%f", &Height);

    BMI = Weight / (Height * Height);
    printf("Your BMI is:%f \n", BMI);

    puts("Enter your Character");
    puts("Enter your Character");
    getchar();

    return 0;
}
