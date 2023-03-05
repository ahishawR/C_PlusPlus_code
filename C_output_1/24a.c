#include <stdio.h>
/*Explanation: 
The value '\012' means the character with value 12 in octal, which is decimal 10. 
Note: It is equivalent to char a = 012 and int a = ‘\012’ and int a = 012.
*/
int main()
{
    char a = 012;
    printf("%d", a);
    return 0;
}