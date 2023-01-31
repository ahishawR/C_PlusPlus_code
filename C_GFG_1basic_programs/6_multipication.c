#include<stdio.h>
void main(){

    /*C Program to Multiply two Floating Point Numbers
     Input: A = 2.12, B = 3.88
     Output: 8.225600 
     Input: A = 3.78, B = 6.32 
     Output: 23.889601*/

     float a,b;
     printf("Enter two float numbers to get the product :");
     scanf("%f%f",&a,&b);
     printf("\n Product=%.2f",a*b);

    /*Time Complexity: O(1), as we are not using any loops.
     Auxiliary Space: O(1), as we are not using any extra space.
     to print two decimal integer we write like (%.2f) op=2.00 type.
     In c language in float data type after point 6 digit can be placed.
    */
}