#include <stdio.h>
#include <stdlib.h>

int main()
{
   float Weight;
   float Height;
   char user;

        printf("Please enter your weight\n",Weight);
  scanf("%f",&Weight);
 printf("Please enter your height\n",Height);
  scanf("%f",&Height);




  float BMI;
  BMI=Weight/(Height*Height);
  printf("Your BMI is:%f \n",BMI);

puts("\nEnter a character:");
    getchar(); // This clears the 'Enter' key from the previous scanf

    user = getchar();
    printf("You entered: ");
    putchar(user);
    printf("\n");

    // 7. Displaying text with escape sequences (\n for newline, \t for tab)
    printf("Examples of programming languages:  \n");
    printf("\t 1. Java  \n");
    printf("\t 2. C++ \n");
    printf("\"What other language do you know? \"\n");



    return 0;
}
