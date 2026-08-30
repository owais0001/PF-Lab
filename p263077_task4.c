#include <stdio.h>

int main ()
{
      printf("================ TEMPERATURE CONVERSION ================\n");
      float celsius=37.5;
      printf("Temperature in Celsuis:\t\t%.2f  C\n",celsius);
    float fahrenheit;
    float kelvin;
    fahrenheit=(celsius*9.0/5.0)+32.0;
    kelvin=celsius + 273.15;
    printf("Temperature in Fahrenhiet:\t%.2f  F\n",fahrenheit);
    printf("Temperature in Kelvin:\t\t%.2f  K\n",kelvin);

    printf("========================================================\n");








      return 0;

}