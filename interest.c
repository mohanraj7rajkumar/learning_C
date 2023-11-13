#include <stdio.h>
#include <conio.h> // Include the conio.h header for getch() function

int main(void) 
{
    float int_tot, frac, pri, intrest, rate, time, total;
    int i;

    pri = 1000;     // Principal amount
    total = pri;    // Initialize the total amount with the principal
    rate = 0.03;    // Interest rate (3%)
    time = 24;      // Time period in months
    int_tot = 0;    // Initialize the total interest to zero

    for (i = 1; i <= time; i++)
	{
        intrest = (rate * total); // Calculate interest for the current month
        int_tot = int_tot + intrest; // Add the interest to the total interest
        total = total + intrest; // Add the interest to the total amount
        frac = (int_tot / pri) * 100; // Calculate the fractional part of the total interest

        // Print the results for the current month
        printf("Month %d: Debt = %.2f, Interest = %.2f, Total Interest = %.2f, Fraction = %.2f%%\n", i, total, intrest, int_tot, frac);
    }

    getch(); // Wait for a key press

    return 0; // Exit the program with a return code of 0, indicating successful execution
}
