#include <stdio.h>
int main()
{
    int n, num, final, rem;
    final = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);
    num = n;
    while (n != 0)
    {
        rem = n % 10;
        final = final * 10 + rem;
        n /= 10;
    }

    //printf("\nfinal %d", final);
    if (num == final)
        printf("it's a pallindrome ");
    else
        printf(" not a pallindrome");

    return 0;
}