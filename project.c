#include <stdio.h>

int main() {
    float temp, humidity, wind_speed, precipitation;
    
    printf("Enter the current temperature in Celsius: ");
    scanf("%f", &temp);
    
    printf("Enter the current humidity (in percentage): ");
    scanf("%f", &humidity);
    
    printf("Enter the current wind speed (in km/h): ");
    scanf("%f", &wind_speed);
    
    printf("Enter the current precipitation (in mm/h): ");
    scanf("%f", &precipitation);
    
    printf("\nWeather Report:\n");
    printf("-----------------\n");
    
    // Check temperature
    if (temp > 30) {
        printf("It's a hot day.\n");
    } else if (temp > 20) {
        printf("It's a pleasant day.\n");
    } else if (temp > 10) {
        printf("It's a cool day.\n");
    } else {
        printf("It's a cold day.\n");
    }
    
    // Check humidity
    if (humidity > 60) {
        printf("It's a humid day.\n");
    } else if (humidity < 30) {
        printf("It's a dry day.\n");
    } else {
        printf("It's a moderate day in terms of humidity.\n");
    }
    
    // Check wind speed
    if (wind_speed > 40) {
        printf("There's a high wind warning.\n");
    } else if (wind_speed > 20) {
        printf("It's a breezy day.\n");
    } else {
        printf("It's a calm day in terms of wind.\n");
    }
    
    // Check precipitation
    if (precipitation > 10) {
        printf("There's a chance of rain.\n");
    } else {
        printf("There's no precipitation expected.\n");
    }
    
    return 0;
}
