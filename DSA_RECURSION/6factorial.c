/*FACTORIAL OF (n)
    Represent as [n!]
    n!= 1*2*3*4*5*.....*n
    And [0!=1!=1]
    fact(n)=(n-1)*n ---->RECURSIVE DEFINATION FOR FACTORIAL OF (n) NATURALS NUMBERS;*/
#include <stdio.h>
int fact(int n)
{
    if ( n == 0)            // Time Complexity---O(1)
        return 1;           //return 1 means it will return 1(value)
    return fact(n - 1) * n;  // Space Complexity---O(1)

}
int fact2(int n)
{
    int facto = 1;
    for (int i = 1; i <= n; i++) // Time Complexity---O(n)
        facto = facto * i;       // Space Complexity---O(3)
    return facto;
}
int main()
{
    int a = 4;
    printf("recursion %d loop %d", fact(a), fact2(a));
}
