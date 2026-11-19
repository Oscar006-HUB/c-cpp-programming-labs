/*
 * Lab 5 Assignment 2: Area of shaded regions.
 *
 * Each shaded region is the area of an outer shape minus (or plus)
 * the areas of the basic shapes inside it.
 */
#include <stdio.h>
#include <stdlib.h>

float rectangle(float length, float width);
float triangle(float base, float height);
float circle(float radius);
float square(float side);

int main()
{
    float area;

    puts("Shaded 1\nRectangle minus a semi-circle cutout.");
    area = rectangle(24, 15) - circle(9) / 2;
    printf("Area = %.2f\n\n", area);

    puts("Shaded 2\nLarge triangle minus a smaller triangle.");
    area = triangle(13, 18) - triangle(13, 7);
    printf("Area = %.2f\n\n", area);

    puts("Shaded 3\nCircle with an inscribed triangle.");
    area = circle(6) - triangle(12, 6);
    printf("Area = %.2f\n\n", area);

    puts("Shaded 4\nRectangle minus a slanted cutout.");
    area = rectangle(11, 14) - rectangle(11, 14);
    printf("Area = %.2f\n\n", area);

    puts("Shaded 5\nRectangle with a semi-circle on top.");
    area = rectangle(22, 12) + circle(11) / 2;
    printf("Area = %.2f\n\n", area);

    puts("Shaded 6\nCompound shaded region subtraction.");
    area = rectangle(20, 17) - rectangle(5, 17) - triangle(15, 17);
    printf("Area = %.2f\n\n", area);

    return 0;
}

float square(float side)
{
    return side * side;
}

float circle(float radius)
{
    return 3.14 * radius * radius;
}

float triangle(float base, float height)
{
    return 0.5 * base * height;
}

float rectangle(float length, float width)
{
    return length * width;
}
