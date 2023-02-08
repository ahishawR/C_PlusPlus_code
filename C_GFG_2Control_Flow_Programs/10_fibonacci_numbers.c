#include<stdio.h>
    /*C Program For Fibonacci Numbers
    The Fibonacci numbers are the numbers
    in the following integer sequence.
    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..
    formula=    Fn = Fn-1 + Fn-2*/
    int fib(int n)
    {
        /* Declare an array to store Fibonacci numbers. */
        int f[n + 1];
        int i;

        /* 0th and 1st number of the series are 0 and 1*/
        f[0] = 0;
        f[1] = 1;

        for (i = 2; i <= n; i++)
        {
            /* Add the previous 2 numbers in the series
             and store it */
            f[i] = f[i - 1] + f[i - 2];
        }

        return f[n];
    }

    int main()
    {
        int n = 9;
        printf("%d", fib(n));
        getchar();
        return 0;
    }
