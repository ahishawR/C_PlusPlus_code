#include "stdio.h"
/*As per C standard C11, all the arguments of
printf() are evaluated irrespective of whether they get printed or not.
That’s why (b=a+2) would also be evaluated and value of b would be 12 after first printf().
That’s why correct answer is B.
*/
int main()
{
    int a = 10;
    int b = 15;

    printf("=%d", (a + 1), (b = a + 2));
    printf(" %d=", b);

    return 0;
}