// C program to multiply two floating point numbers
#include <stdio.h>

int main()
{
	float A, B, product = 0.0f;

	// Ask user to enter the two numbers
	printf("Enter two floating numbers A and B : \n");

	// Read two numbers from the user || A = 2.12, B = 3.88
	scanf("%f%f", &A, &B);

	// Calculate the multiplication of A and B
	// using '*' operator
	product = A * B;

	// Print the product
	printf("Product of A and B is: %f", product);

	return 0;
}
