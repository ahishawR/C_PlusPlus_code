#include "stdio.h"
/*In C, if a function name is used without parentheses,
the reference to the function name simply generates a pointer to the function,
which is then discarded. So the above program would compile but won’t print anything.
*/
int foo(int a)
{
    printf("%d", a);
    return 0;
}

int main()
{
    foo;
    return 0;
}