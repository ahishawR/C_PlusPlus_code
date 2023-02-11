#include<stdio.h>
#include <stdio.h>
int main(){
	/*Armstrong Numbers between 1 to 1000
	ARmstrong numbers=   
153=
(3)^3 + (53)^3 + (33)^3
1 + 125 + 27 = 153
LHS=RHS=153;*/
// C Program to Display Armstrong
// numbers between 1 to 1000

	int i, sum, num, count = 0;
	printf(
		"All Armstrong number between 1 and 1000 are:\n");
	for (i = 1; i <= 1000; i++) {
		num = i;
		// Count number of digits.
		while (num != 0) {
			num /= 10;
			count++;
		}
		num = i;
		sum = pow(num % 10, count)
			+ pow((num % 100 - num % 10) / 10, count)
			+ pow((num % 1000 - num % 100) / 100, count);
		// Check for Armstrong Number
		if (sum == i) {
			printf("%d ", i);
		}
		count = 0;
	}
}

