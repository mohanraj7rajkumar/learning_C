#include <stdio.h>
#include <conio.h> // Include the conio.h header for getch() function

int main(void) 
{
    float far, cel;
    int lower, upper, step;

    lower = -30;
    upper = 30;
    step = 2;

    cel = lower;

    while (cel <= upper) 
	{
        far = ((cel * 9) / 5) + 32;
        printf("%1.0f %2.2f\n", cel, far);
        cel = cel + step;
    }

    getch(); // Wait for a key press

    return 0;
}
