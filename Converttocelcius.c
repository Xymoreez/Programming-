/*
Name;Simon Rukungu Njiiri 
Reg:CT101/G/26500/25
Description; convert to celcius
*/
#include <stdio.h>

// Function to calculate the total fare
float calculateFare(float distance) {
    // Assume fare rate is KSh. 50 per kilometer
    float fare_rate = 50.0; 
    float total_fare = distance * fare_rate;
    return total_fare;
}

int main() {
    // Example usage
    float distance1 = 10.0;
    float fare1 = calculateFare(distance1);
    printf("Distance: %.2f km, Total Fare: KSh. %.2f\n", distance1, fare1);

    float distance2 = 5.5;
    float fare2 = calculateFare(distance2);
    printf("Distance: %.2f km, Total Fare: KSh. %.2f\n", distance2, fare2);

    return 0;
}
#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    return celsius;
}

int main() {
    float tempFahrenheit = 68.0;
    float tempCelsius = convertToCelsius(tempFahrenheit);
    printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.\n", tempFahrenheit, tempCelsius);
    return 0;
}
