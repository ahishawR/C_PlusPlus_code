#include <stdio.h>
int checkPrimeNumber(int num)
{
    int i, f = 1;
    for (i = 2; i <= num / 2; ++i)
    { // condition to cheak prime numbers

        if (num % i == 0)
        {
            f = 0;
            break;
        }
    }

    return f;
}
int main()
{
    /*Prime Numbers between range in function
    code by gfg;*/
    int num1, num2, j, f;
    printf("Enter Range ");
    scanf("%d%d",&num1,&num2);

    printf("Prime numbers between %d and %d are: ", num1,num2);
    for (j = num1; j < num2; ++j)
    {
        f = checkPrimeNumber(j);

        if (f == 1)
        {
            printf("%d ", j);
        }
    }

    return 0;
}
