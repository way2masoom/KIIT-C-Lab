// 	WAp to convert a quantity in meter entered thought Keyboard into its equivalent Kilometer and Meter
// as per the following Formate. Example 2430 meter =2km and 430meter
#include <stdio.h>
#include <conio.h>

int main()
{
    int meters, kilometers, remainingMeters;

    printf("Enter the distance in meters: ");
    scanf("%d", &meters);

    // Calculation to find the kilometers and meters
    kilometers = meters / 1000;      // To convert Meter into kilometer
    remainingMeters = meters % 1000; // To convert meter into meter

    printf("Equivalent distance: %d kilometer(s) %d meter(s)", kilometers, remainingMeters);

    return 0;
}