#include "stdio.h"
int main()
{   /*In C, scanf returns the no. of inputs it has successfully read.
    first scanf("%s",arr)execute then printf ("%d", scanf("%s",arr)); eill execute.*/
    char arr[100];
    printf("%d", scanf("%s", arr));
    /* Suppose that input value given
        for above scanf is "GeeksQuiz" */
    return 0;
}
