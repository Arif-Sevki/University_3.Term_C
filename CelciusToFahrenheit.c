#include <stdio.h>

int main(){
    float celcius, fahrenheit;
    
    printf("Enter the temperature in Celcius: ");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9.0/5.0) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

}