#include <stdio.h>
/*C Program To Check Prime Number By Creating a Function
	numbers which can divisible by 1 and number itself called
	prime numbers
Input:
n = 7
Output:
7 is a prime number
*/
int prime_num(int num)
{
	// my logic
	int add = 0;
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			add++;
		}
	}
	if (add == 2)
	{
		return 1;
	}
	else
		return 0;
}
int prime_num1(int num)
{ // Using for loop
	int i;
	for (i = 2; i <= num / 2; i++)
	{
		if (num % i != 0)
			continue;
		else
			return 1;
	}
	return 0;
}

int prime_num2(int num)
{ ////Using for loop for not prime number
	int i;
	for (i = 2; i <= num - 1; i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}

int prime_num3(int num)
{ // using while loop
	int i = 2;
	while (i <= num / 2)
	{
		if (num % i == 0)
			return 0;
		else
			i++;
	}
	return 1;
}

int main()
{
	int num , cheak = 0, cheak1 = 0, cheak2 = 0, cheak3 = 0;
	printf("Enter a num to cheak prime or not ");
	scanf("%d",&num);
	// calling the function
	cheak = prime_num(num);
	if (cheak == 1)
		printf("%d is a prime number by func\n", num);
	else
		printf("%d is not a prime number by func\n", num);

	cheak1 = prime_num1(num);
	if (cheak1 == 0)
		printf("%d is a prime number by func1\n", num);
	else
		printf("%d is not a prime number by func1\n", num);

	cheak2 = prime_num2(num);
	if (cheak2 == 1)
		printf("%d is a prime number by func2\n", num);
	else
		printf("%d is not a prime number by func2\n", num);

	cheak3 = prime_num3(num);
	if (cheak3 == 1)
		printf("%d is a  prime number by func3\n", num);
	else
		printf("%d is a not prime number by func3\n", num);
}
