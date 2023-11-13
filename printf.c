#include <stdio.h>
#include <conio.h> // Include the conio.h header for getch() function

int main(void) 
{
    int i;     // Declare an integer variable i
    float x;   // Declare a floating-point variable x

    i = 42;     // Assign the value 42 to the integer variable i
    x = 3.10;   // Assign the value 3.10 to the floating-point variable x

    printf("i=%d\nx=%.2f", i, x); // Print the values of i and x with specific formatting

    getch(); // Wait for a key press

    return 0; // Exit the program with a return code of 0, indicating successful execution
}
