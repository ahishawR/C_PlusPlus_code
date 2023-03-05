
/*  SUM OF (n) NATURALS NUMNERS-->
    Naturals numbers start from 1 onwards
    sum(n)=1+2+3+4+....+n
    = sum(n)=1+2+3+4+5+.......+(n-1)+n
    = sum(n)=sum(n-1)+n ---->RECURSIVE DEFINATION FOR SUM OF (n) NATURALS NUMBERS;
    Another Defination is ------>[n(n+1)/2]
    */

#include <stdio.h>
int sum(int n)
{
    if (n == 0)   // Time Complexity---O(1)
        return 0; // Space Complexity---(n+1)
    //return(sum(n-1)+n);
    return (n * (n + 1) / 2);
}
int sum2(int n)
{
    int s = 0, i;            //Time Complexity---O(n)
    for (i = 1; i <= n; i++)  //Space Complexity---O(3) n,i,s;
    {
        s = s + i;
    }
    return s;
}
void main()
{
    int a = sum(3);
    printf(" recursion %d loop %d", a, sum2(3));
}