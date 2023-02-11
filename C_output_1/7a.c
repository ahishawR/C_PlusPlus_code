#include<stdio.h>
/*.* means The precision is not specified in the format string, 
but as an additional integer value argument preceding the argument 
that has to be formatted.
*/
int main()
{
    char *s = "Geeks Quiz";
    int n = 7;
    printf("%.*s", n, s);
    return 0;
}