#include<stdio.h>

 /*Question: Given a Temperature n in Fahrenheit scale convert it into Celsius scale.
      Input: 32
      Output: 0

      Input: -40
      Output: -40
      Formula for converting Fahrenheit scale to Celsius scale
        [ T(°C) = (T(°F) - 32) × 5/9 ]*/ 

float fahrenheit_convert(float T){
float convert;
convert=((T - 32.0) * 5.0 / 9.0);
printf(" %.2f",convert);
}
  int main(){
    float T;
    printf("Enter temperture in Fahrenheit ");
    scanf("%f",&T);
    printf("Temperture in celcius ");
    fahrenheit_convert(T);
    return 0;
  }  


  /*          **SECOND TYPE**
  float fahrenheit_to_celsius(float f){
  return ((f - 32.0) * 5.0 / 9.0);
  }
  void main(){
  float f = 40;
  // Passing parameter to function
  printf("Temperature in Degree Celsius : %0.2f",fahrenheit_to_celsius(f));
  }*/


