#include <stdio.h>
/*to cheak even or odd numbers by switch case
Time Complexity: O(1)
Auxiliary Space: O(1) 
*/

int main()
{
    int num;
    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("not even not odd");
        return 0;
    }

    switch (num % 2)
    {
    /* If n%2 == 0 */
    case 0:
        printf("%d Number is Even", num);
        break;

    /* Else if n%2 == 1 */
    case 1:
        printf("%d Number is Odd", num);
        break;
    }

    return 0;
}
/*void checkEvenOdd(int N)
{
    // If N & 1 is true
    if (N & 1) {
    printf("Odd");
    }

    // Otherwise
    else {
    printf("Even");
    }
}
 */
