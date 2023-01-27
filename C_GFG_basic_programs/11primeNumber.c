
/*C Program to Print Prime Numbers From 1 to N
    Input:
    N = 50
    Output: 
    2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47

    Approach 1: To check whether every number is prime or not
      1)First, we take the number N as the input.
      2)Then use a loop to iterate the numbers from 1 to N.
      3)Then check for each number to be a prime number.

*/
// C program to display Prime numbers till N

#include <stdbool.h>
#include <stdio.h>

// This function is to check
// if a given number is prime
bool isPrime(int n)
{
	if (n == 1 || n == 0)
		return false;

	
	for (int i = 2; i < n; i++) { // Run a loop from 2 to n-1
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int N = 10;

	// check for the every number from 1 to N
	for (int i = 1; i <= N; i++) {
		
		// check if i (current number) is prime
		if (isPrime(i)) {
			printf("%d ", i);
		}
	}
	return 0;
}
