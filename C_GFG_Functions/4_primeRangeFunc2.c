# include<stdio.h>
int Prime(int number)
{
	int i;
    //func to cheak num is prime or not 
	for (i = 2; i <= number / 2; i++) {
		if (number % i == 0) {
			return 0;
		}
	}

	return 1;
}

int main()
{
	int num1 , num2 ;
    printf("enter range ");
    scanf("%d%d",&num1,&num2);

	printf("The prime numbers between %d to %d are: ", num1, num2);

	while (num1 <= num2) {

		if (Prime(num1)) {
			printf("%d, ", num1);
		}

		num1++;
	}

	return 0;
}
