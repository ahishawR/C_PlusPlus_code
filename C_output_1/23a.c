#include <stdio.h>
/*Predict the output of following program. Assume that the numbers are stored in 2's complement form?

Explanation: 
-1 and ~0 essentially have same bit pattern, hence x and y must be same. In the comparison, y is promoted 
to unsigned and compared against x 
*/
int main()
{
    unsigned int x = -1;
    int y = ~0;
    if (x == y)
        printf("same");
    else
        printf("not same");
    return 0;
}