/*
 * Lab 5 Assignment: Area of composite shapes.
 *
 * Each shape is broken down into basic shapes (rectangle, triangle, circle)
 * whose areas are calculated by small helper functions and then added or
 * subtracted to get the total / shaded area.
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

    /* ---------------- Composite shapes ---------------- */

    puts("Shape 1\nIt contains a semi-circle and a rectangle.");
    area = rectangle(12, 8) + circle(4) / 2;
    printf("Area of shape 1 = %.2f\n\n", area);

    puts("Shape 2\nRectangle and triangle tip.");
    area = rectangle(13, 8) + triangle(8, 6);
    printf("Area of shape 2 = %.2f\n\n", area);

    puts("Shape 3\nT-Shape with two rectangles.");
    area = rectangle(11, 4) + rectangle(5, 6);
    printf("Area of shape 3 = %.2f\n\n", area);

    puts("Shape 4\nTriangle on top of a semi-circle.");
    area = triangle(8, 7) + circle(4) / 2;
    printf("Area of shape 4 = %.2f\n\n", area);

    puts("Shape 5\nRectangle with a triangular side.");
    area = rectangle(9, 7) + triangle(7, 3);
    printf("Area of shape 5 = %.2f\n\n", area);

    puts("Shape 6\nL-Shape with two rectangles.");
    area = rectangle(12, 4) + rectangle(6, 4);
    printf("Area of shape 6 = %.2f\n\n", area);

    /* ---------------- Shaded regions ---------------- */

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
    area = rectangle(11, 14) - rectangle(7, 14);
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
