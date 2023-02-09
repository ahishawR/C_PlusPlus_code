
#include <stdio.h>
int main()
{        /*153 is an Armstrong number of 3 digits, since the sum of cubes of each digit is equal to the number itself. As shown below: 
		1*1*1 + 5*5*5 + 3*3*3 = 153*/
	int num = 153;
	int temp = num;
	int p = 0;
	while (num > 0) {
		int rem = num % 10;
		p = (p) + (rem * rem * rem);
		num = num / 10;
	}
	if (temp == p) {
		printf("Yes. It is Armstrong No.");
	}
	else {
		printf("No. It is not an Armstrong No.");
	}
	return 0;
}
