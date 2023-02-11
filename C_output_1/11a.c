#include <stdio.h>
#include <stdarg.h>
/*The function receives variable number of arguments as there are three dots after first argument.   
The firs argument is count of all arguments including first.  The function mainly 
returns sum of all remaining arguments*/
int fun(int n, ...)
{
    int i, j = 1, val = 0;
    va_list p;
    va_start(p, n);
    for (; j < n; ++j)
    {
        i = va_arg(p, int);
        val += i;
    }
    va_end(p);
    return val;
}
int main()
{
    printf("%dn", fun(4, 1, 2, 3));
    return 0;
}