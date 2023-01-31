#include <stdio.h>
int main()//doubt;
{
	// C program to check whether number is prime or not (2nd method)
	// code
	int n;
	int m = n - 1;
	int factm = 1;
	printf("Enter number for cheaking prime or not");
	scanf("%d",&n);
// find factorial of n-1
	for (int i = 1; i <= m; i++) {
		factm *= i;
	}

// add 1 to (n-1)!
	int factn = factm + 1;
	if (factn % n == 0) {
		// if remainder is 0
		printf(" %d is prime number",n);
	}
	else {
		printf("%d is not prime number",n);
	}
	return 0;
}
