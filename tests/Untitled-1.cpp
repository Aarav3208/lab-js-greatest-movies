#include <stdio.h>

// Define a structure called 'Point'
struct Point {
    int x;
    char y[50];
};

int main() {
    // Create a new 'Point' structure variable called 'p1'
    struct Point p1;

    // Assign values to the structure members
    p1.x = 3;
    p1.y = "hello";

    // Print out the structure member values
    printf("Point p1:\n");
    printf("x: %d\n", p1.x);
    printf("y: %c\n", p1.y);

    // Create another 'Point' structure variable called 'p2'
    struct Point p2;

    // Assign values to the structure members
    p2.x = 6;
    p2.y = "niggesh";

    // Print out the structure member values
    printf("\nPoint p2:\n");
    printf("x: %d\n", p2.x);
    printf("y: %c\n", p2.y);

    return 0;
}