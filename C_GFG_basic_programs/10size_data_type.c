#include <stdio.h>
/*C Program to Find the Size of int, float, double and char
Input: int
Output: Size of int = 4

Input: double
Output: Size of double = 8
*/
void main()
{
    int intType;
    char charType;
    float floatType;
    double doubleType;
    printf(" int %d\n", sizeof(intType));
    printf(" char %d\n", sizeof(charType));
    printf(" float %d\n", sizeof(floatType));
    printf(" double %d\n", sizeof(doubleType));
}
