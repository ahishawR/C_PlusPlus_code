#include<stdio.h>
#include <math.h>
int main(){
    //Question: C Program to Check Whether a Number is Prime or not;

	int n, i, flag = 1;

	// Ask user for input
	printf("Enter a number: \n");

	// Store input number in a variable
	scanf("%d", &n);

	// Iterate from 2 to sqrt(n)
	for (i = 2; i <= sqrt(n); i++) {

		// If n is divisible by any number between
		// 2 and n/2, it is not prime
		if (n % i == 0) {
			flag = 0;
			break;
		}
	}

	if (n <= 1)
		flag = 0;

	if (flag == 1) {
		printf("%d is a prime number", n);
	}
	else {
		printf("%d is not a prime number", n);
	}

	return 0;
//     Why did we choose sqrt(N)? 
// The reason is that the smallest and greater than one factor of a 
// number cannot be more than the sqrt of N. And we stop as soon as we 
// find a factor. For example, if N is 49, the smallest factor is 7. 
// For 15, smallest factor is 3.

}


